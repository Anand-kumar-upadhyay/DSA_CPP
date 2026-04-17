class Solution {
public:
    vector<vector<int>> dp;
    int func(vector<int>& arr, int i, int j) {
        
            if (i>j)return 0 ;
        if (dp[i][j] != -1)
            return dp[i][j];
        int ans = INT_MIN;
        for (int k = i; k <=j; k++) {
            ans = max(ans, func(arr, i, k-1) + func(arr, k+1, j) +
                               arr[i-1] * arr[j+1] * arr[k]);
        }
        return dp[i][j] = ans;
    }
    int maxCoins(vector<int>& nums) {
    nums.insert(nums.begin(),1);
    nums.push_back(1);
    int n = nums.size();
    dp.resize(n + 1, vector<int>(n + 1, -1));
    return func(nums, 1, n-2);
    }
};