class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size();
        int n=grid[0].size();

        if(grid[0][0]==1)health--;

        priority_queue<pair<int,pair<int,int>>>q;
        q.push({health,{0,0}});
        grid[0][0]=-1;

        vector<vector<int>>dir={{0,-1},{0,1},{1,0},{-1,0}};


        while(q.size()>0)
        {
            auto ele=q.top();
            q.pop();
            int nh=ele.first;

            int i=ele.second.first;
            int j=ele.second.second;

            if(i==m-1 && j==n-1 && nh>=1)return true;

            for(int k=0;k<4;k++)
            {
                int ni=i+dir[k][0];
                int nj=j+dir[k][1];

                if(ni<0||nj<0||ni>=m||nj>=n||grid[ni][nj]==-1)continue;

                int o=nh;
                if(grid[ni][nj]==1)o--;

                if(o<=0)continue;

                q.push({o,{ni,nj}});
                grid[ni][nj]=-1;
                
            }

        }
   return false; }
};