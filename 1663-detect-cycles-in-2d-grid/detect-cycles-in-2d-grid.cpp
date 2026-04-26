class Solution {
public:

   bool func(vector<vector<char>>& grid,int i,int j,int m,int n, int p1,int p2,vector<vector<bool>>&par)
   {
      par[i][j]=1;
      vector<vector<int>>dir={{0,-1},{-1,0},{1,0},{0,1}};
      for(int w=0;w<4;w++)
      {
        int p=dir[w][0]+i;
        int q=dir[w][1]+j;
        if(p<m&&q<n&&p>=0&&q>=0)
        {
         if(grid[p][q]!=grid[i][j])continue;

         if(par[p][q]==0)
           {
              if(func(grid,p,q,m,n,i,j,par))return true;
           }
            else
            {
                if(grid[p][q]==grid[i][j])
                {
                    if(!(p==p1&&q==p2))return true;

                }
               
            }
        }

      }


      return false;


   }
    bool containsCycle(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>par(m,vector<bool>(n,0));
       for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!par[i][j]) {
                if (func(grid, i, j, m, n, -1, -1, par))
                    return true;
            }
        }
    }
    return false;
        
    }
};