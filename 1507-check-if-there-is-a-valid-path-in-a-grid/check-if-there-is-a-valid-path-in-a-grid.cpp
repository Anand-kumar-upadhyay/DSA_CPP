class Solution {
public:
typedef pair<int,int>p;
set<p>st;

bool dfs(int i,int j,int m,int n,vector<vector<int>>& grid,unordered_map<int,vector<p>>&mp)
{
    if(i==m-1&&j==n-1)return true;
    st.insert({i,j});


    for(auto ele:mp[grid[i][j]])
    {
        int ni=i+ele.first;
        int nj=j+ele.second;

        if(ni>=0&&ni<m&&nj>=0&&nj<n && st.find({ni,nj})==st.end())
        {
            for(auto e:mp[grid[ni][nj]])
            {
                if(ni+e.first==i&&nj+e.second==j)
                {
                    if(dfs(ni,nj,m,n,grid,mp)) return true;
                }

            }
        }

    }



    return false;

}
    bool hasValidPath(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();


        unordered_map<int,vector<p>>mp;


        mp[1].push_back({0,-1});
        mp[1].push_back({0,1});

        mp[2].push_back({-1,0});
        mp[2].push_back({1,0});

        mp[3].push_back({0,-1});
        mp[3].push_back({1,0});

        mp[4].push_back({0,1});
        mp[4].push_back({1,0});

        mp[5].push_back({-1,0});
        mp[5].push_back({0,-1});

        mp[6].push_back({-1,0});
        mp[6].push_back({0,1});



        return dfs(0,0,m,n,grid,mp);

    }
};