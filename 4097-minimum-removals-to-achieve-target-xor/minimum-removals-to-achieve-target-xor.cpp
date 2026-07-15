class Solution {
public:
vector<vector<int>>dp;

int  func(int i,vector<int>& nums, int tar,int xo,int n)
{
    if(i==n)
    {
        if(xo==tar)
        {
           return 0;
        }
        else return INT_MIN;
    }
    if(dp[i][xo]!=-1)return dp[i][xo];
    int x=0;
     x=1+func(i+1,nums,tar,xo^nums[i],n);
   
    int y=func(i+1,nums,tar,xo,n);
    return dp[i][xo]=max(x,y);

}
    int minRemovals(vector<int>& nums, int target) {
        int n=nums.size();
        dp.resize(n,vector<int>(50000,-1));
        int ans=func(0,nums,target,0,n); 
        if(ans<0)return -1;
        

   else return n-ans; }
};