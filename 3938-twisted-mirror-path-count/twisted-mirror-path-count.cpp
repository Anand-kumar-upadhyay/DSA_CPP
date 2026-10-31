class Solution {
public:

#define mod 1000000007

int func(int i,int j,int m,int n,vector<vector<int>> &grid,int dir,int dp[][500][2])
{
    if(i==m-1 && j==n-1)return 1;
    if(i<0||j<0||i>=m||j>=n)return 0;
    
    long long ans=0;
    if(dp[i][j][dir]!=-1)return dp[i][j][dir];

    if(grid[i][j]==1)
    {
        if(dir==0)ans=(ans+func(i+1,j,m,n,grid,1,dp))%mod;
        else ans=(ans+func(i,j+1,m,n,grid,0,dp))%mod;

    }
    else
    {
        ans=(ans+func(i+1,j,m,n,grid,1,dp))%mod;
        ans=(ans+func(i,j+1,m,n,grid,0,dp))%mod;
    }
    return dp[i][j][dir]=ans;
}
    int uniquePaths(vector<vector<int>>& grid) {
        
        int m=grid.size();

        int n=grid[0].size();

      int dp[500][500][2];
      memset(dp,-1,sizeof(dp));

        return func(0,0,m,n,grid,0,dp);
    }
};