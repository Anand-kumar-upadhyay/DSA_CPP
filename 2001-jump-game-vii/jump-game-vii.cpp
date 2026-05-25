class Solution {
public:
    bool canReach(string s, int minj, int maxj) 
    {
        int n=s.size();
        queue<int>q;

        q.push(0);
        vector<int>vis(n,0);
        vis[0]=1;
        int f=1;

        while(q.size()>0)
        {
            auto ele=q.front();
            q.pop();
            if(ele==n-1)return true;

            int l=max(f,ele+minj);
            int h=min(n-1,ele+maxj);

            for(int r=l;r<=h;r++)
            {
                if(s[r]=='0'&&vis[r]==0)
                {
                    vis[r]=1;
                    q.push(r);

                }
            }
            f=h+1;
        }


        return false;
        
    }
};