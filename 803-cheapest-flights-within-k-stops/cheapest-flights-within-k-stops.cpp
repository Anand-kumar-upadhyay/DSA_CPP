class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& fli, int src, int dst, int k) {
        queue<int>q;
        vector<vector<pair<int,int>>>graph(n);


        for(int i=0;i<fli.size();i++)
        {
            int a=fli[i][0];
            int b=fli[i][1];
            int c=fli[i][2];
            graph[a].push_back({b,c});

        }
        vector<int>ans(n,INT_MAX);
        ans[src]=0;

        q.push(src);
        int a=0;

        while(q.size()>0 &&a<=k)
        {
            int p=q.size();
            vector<int>t=ans;

            while(p--)
            {
            auto ele=q.front();
            q.pop();
            for(auto e:graph[ele])
            {
                if(ans[ele]+e.second<t[e.first])
                {
                    t[e.first]=ans[ele]+e.second;
                    q.push(e.first);
                }


            }
            }
            a++;
            ans=t;
        }
        if(ans[dst]==INT_MAX)return -1;

        return ans[dst];
    }
};