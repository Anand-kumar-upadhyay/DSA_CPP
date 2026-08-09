class Solution {
public:

int func(int i,vector<int>& piles,int n,int m,vector<vector<int>>&dp)
{
    if(i>=n)return 0;
    int ans=0;
    int t=0;
    if(dp[i][m]!=-1)return dp[i][m];

    for(int k=i;k<n;k++)t+=piles[k];

    for(int j=1;j<=2*m&&j<n;j++)
    {
        int y=func(i+j,piles,n,max(m,j),dp);

        int c=t-y;
        ans=max(ans,c);


    }
    return dp[i][m]=ans;
}
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        if(n==1)return piles[0];
        vector<vector<int>>dp(n,vector<int>(n,-1));

        return func(0,piles,n,1,dp);
    }
};