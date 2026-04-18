class Solution {
public:
vector<int>dp;

int func(int i,vector<int>&nums)
{
    if(i==nums.size()-1)return 0;
    if(dp[i]!=-1)return dp[i];

    int h=i+nums[i];
    if(h>=nums.size())return 1;
    int ans=INT_MAX-1000;
    for(int k=i+1;k<=h;k++)
    {
        ans=min(ans,1+func(k,nums));
    }
    return dp[i]=ans;
}
    int jump(vector<int>& nums) {
        dp.resize(nums.size()+2,-1);
        return func(0,nums); 
    }
};