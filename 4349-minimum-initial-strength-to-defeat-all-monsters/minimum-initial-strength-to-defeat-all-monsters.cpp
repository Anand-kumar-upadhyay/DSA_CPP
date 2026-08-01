class Solution {
public:
    long long minInitialStrength(vector<int>& mon, vector<vector<int>>& bo) {
        
        int n=mon.size();
        vector<long long>v(n,0);
        for(int i=0;i<bo.size();i++)
        {
            long long a=bo[i][0];
            long long b=bo[i][1];
            v[a]+=bo[i][2];

            if(b+1<n)v[b+1]-=bo[i][2];

        }

        long long t=0;
        long long ans=0;
        for(int i=1;i<n;i++)
        {
            v[i]+=v[i-1];

        }

        for(int i=0;i<n;i++)
        {
            if(v[i]<mon[i])
            {
                ans=t;
                ans+=(mon[i]-v[i]);
            }
            t+=mon[i];
        }
   return ans; }
};