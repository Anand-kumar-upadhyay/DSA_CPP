class Solution {
public:
bool static custom(vector<int>&a,vector<int>&b)
{
    return a[2]>b[2];
}



    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& so) 
    {
        sort(so.begin(),so.end(),custom);
        vector<vector<int>>v(n,vector<int>(m,0));
        queue<tuple<int,int,int>>q;

        for(auto ele:so)
        {
            int x=ele[0];
            int y=ele[1];
            int z=ele[2];
            v[x][y]=z;
            q.push({x,y,z});
           
        }
        vector<vector<int>>dir={{0,1},{1,0},{-1,0},{0,-1}};
        while(q.size()>0)
        {
        auto [i,j,c]=q.front();
        q.pop();
        for(int k=0;k<4;k++)
        {
            int ni=i+dir[k][0];
            int nj=j+dir[k][1];
            if(ni<0||nj<0||ni>=n||nj>=m||v[ni][nj]!=0)continue;
            v[ni][nj]=c;
            q.push({ni,nj,c});
        }
        }
        return v;
    }
};