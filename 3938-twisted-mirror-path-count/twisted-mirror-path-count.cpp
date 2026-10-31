class Solution {
public:

#define mod 1000000007

int func(int i,int j,int m,int n,vector<vector<int>> &grid,int dir,vector<vector<vector<int>>>&dp)
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

       vector<vector<vector<int>>>dp(
    m, vector<vector<int>>(n, vector<int>(2, -1))
);

        return func(0,0,m,n,grid,0,dp);
    }
};