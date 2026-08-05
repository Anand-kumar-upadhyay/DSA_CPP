class Solution {
public:
vector<vector<int>>graph;
bool flag=1;
void build(int i,int j)
{
    graph[i].push_back(j);

}


void dfs1(int i,vector<int>&vis,vector<int>&ans)
{
    vis[i]=1;

    for(auto ele:graph[i])
    {
        if(vis[ele]==0)
        {
            ans[ele]=1;
            vis[ele]=1;
            dfs1(ele,vis,ans);
        }

    }
}
void dfs2(int i,vector<int>&vis,vector<int>&ans)
{
    vis[i]=1;

    for(auto ele:graph[i])
    {
        if(vis[ele]==0)
        {
            vis[ele]=1;
            dfs2(ele,vis,ans);
        }

        if(ans[ele]==1)flag=0;


    }
}
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& in) {

        int m=in.size();
        vector<int>ans(n,0);

        graph.resize(n);

        int i=0;

        while(i<m)
        {
            int u=in[i][0];
            int v=in[i][1];

            build(u,v);
            i++;
        }
        vector<int>vis(n,0);
        vis[k]=1;
    
        ans[k]=1;
        dfs1(k,vis,ans);
        
    

        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs2(i,vis,ans);
            }

        }
        if(flag==true)
        {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                
               if(ans[i]==0) v.push_back(i);

            }
            return v;
         
        }
        else 
        {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                v.push_back(i);

            }
            return v;
        }




        return ans;
    }
};