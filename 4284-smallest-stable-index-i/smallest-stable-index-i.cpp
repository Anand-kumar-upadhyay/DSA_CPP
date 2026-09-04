class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mini(n);
        vector<int> maxi(n);
        mini[n-1] = nums[n-1];
        maxi[0] = nums[0];
        int ans = INT_MAX;
        for(int i=1 ;i<n;i++)
        {
            mini[n-i-1] = min(nums[n-i-1],mini[n-i ]);
            maxi[i] = max(nums[i],maxi[i-1]);
        }
        for(int i=0;i<n;i++)
        {
            if(maxi[i]-mini[i]<=k) 
            {
                ans=i;
                break;
            }     
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};