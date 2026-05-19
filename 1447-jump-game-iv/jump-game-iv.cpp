class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        int n=arr.size();
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
        }
        
        queue<pair<int,int>>q;
        vector<int>vis(n,0);

        vis[0]=1;
        q.push({0,0});

        int ans=0;

      
        while(q.size()>0)
        {
            
            int g=q.size();

            for(int i=0;i<g;i++)
            {
                auto ele=q.front();
                q.pop();
                int a=ele.first;
                int b=ele.second;

                if(a==n-1)
                {
                    return b;
                }

                if(a+1<n && !vis[a+1]) 
                {
                 q.push({a+1,b+1});
                vis[a+1]=1;
                }

                if(a-1>=0 && !vis[a-1])
                {
                    q.push({a-1,b+1});
                    vis[a-1]=1;
                }
                for(auto e:mp[arr[a]])
                {
                    if(e==a)continue;

                    if(!vis[e])
                    {q.push({e,b+1});
                    vis[e]=1;
                    }

                }
                mp[arr[a]].clear();
            }

        }


   return ans; }
};