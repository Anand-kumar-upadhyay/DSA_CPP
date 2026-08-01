class Solution {
public:
vector<vector<int>>dp;
int func(int i,int j,vector<int>& nums)
{
    if(i==j)return nums[i];
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=max(nums[i]-func(i+1,j,nums),nums[j]-func(i,j-1,nums));
}
    bool predictTheWinner(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)return true;
        dp.resize(n,vector<int>(n,-1));
        int a=func(0,n-1,nums);
        if(a>=0)return true;
        else return false;
    }
};