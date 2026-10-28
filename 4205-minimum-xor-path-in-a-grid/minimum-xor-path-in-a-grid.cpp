class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<vector<int>>> dp(
    m,vector<vector<int>>(n,vector<int>(1024,0))
);
        dp[0][0][grid[0][0]]=1;

        

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<=1023;k++)
                {

                    if(dp[i][j][k]!=0)
                    {
                        if(i+1<m)
                        {
                            dp[i+1][j][k^grid[i+1][j]]=1;
                        }
                        if(j+1<n)
                        {
                            dp[i][j+1][k^grid[i][j+1]]=1;

                        }
                    }
                }
            }
        }

        int ans=INT_MAX;

        for(int x=0;x<=1023;x++)
        {
            if(dp[m-1][n-1][x])ans=min(ans,x);
        }



        return ans;
        
    }
};