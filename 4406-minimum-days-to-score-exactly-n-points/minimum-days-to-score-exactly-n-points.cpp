class Solution {
public:
int func(int n,int p,vector<int>&dp)
{
    if(n==0)return 0;
    int a=INT_MAX;

    int i=n*500+p;

    if(dp[i]!=-1)return dp[i];

    if(p<=n)
    {
        a=1+func(n-p,p+1,dp);

    }
    int b=2+func(n-1,2,dp);

    return dp[i]=min(a,b);


}
    int minDays(int n) {
        vector<int>dp((n+1)*500+1,-1);

        return func(n,1,dp);
    }
};