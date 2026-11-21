class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int m=grid.size();

        int n=grid[0].size();
        int ans=0;

        for(int i=0;i<m;i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<n;i++)
        {
            int a=-1;
            for(int j=0;j<m;j++)
            {
                a=max(a,grid[j][i]);

            }
            ans+=a;
        }
        

  return ans;  }
};