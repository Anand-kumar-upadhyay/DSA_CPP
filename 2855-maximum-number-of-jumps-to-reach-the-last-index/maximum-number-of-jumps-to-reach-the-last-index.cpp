class Solution {
public:

vector<long long>dp;
int func(int i,vector<int>&nums,int tar,int n)

{
    

    if(i==n-1)return 0;
    if(dp[i]!=-2)return dp[i];

    int ans=-1;
    for(int j=i+1;j<n;j++)
    {
        
        if(abs(nums[j] - nums[i])<= tar)
        {
            int x=func(j,nums,tar,n);
            if(x!=-1) ans=max(ans, 1+x);
        }
    }

    return dp[i]=ans;

}
    int maximumJumps(vector<int>& nums, int tar) {
        

        int n=nums.size();
        dp.resize(1005,-2);
        int g=func(0,nums,tar,n);

        if(g==-1)return -1;
        else return g;


    }
};