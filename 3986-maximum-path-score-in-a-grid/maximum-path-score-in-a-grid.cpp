class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int arr[m][n][k+1];
        memset(arr,-1,sizeof(arr));
        arr[0][0][0]=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int l=0;l<=k;l++)
                {
                    if(arr[i][j][l]==-1)continue;

                    if(i+1<m)
                    {
                        int c=0;
                        int v=grid[i+1][j];
                        if(v==0)c=0;
                        else c=1;
                        int nc=l+c;
                        if(nc<=k)arr[i+1][j][nc]=max(arr[i+1][j][nc],arr[i][j][l]+v);
                    }
                    if(j+1<n)
                    {
                        int c=0;
                        int v=grid[i][j+1];
                        if(v==0)c=0;
                        else c=1;
                        int nc=l+c;
                        if(nc<=k)arr[i][j+1][nc]=max(arr[i][j+1][nc],arr[i][j][l]+v);
                    }



                }

            }
        }
        int ans=-1;
        for(int i=0;i<=k;i++)
        {
            ans=max(ans,arr[m-1][n-1][i]);
        }


         
    return ans;}
};