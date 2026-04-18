class Solution {
public:
vector<vector<int>>dp;
int func(int i,vector<int>&start,vector<vector<int>>&job,int n,int k)
{
    if(i==n||k==0)return 0;

    if(dp[i][k]!=-1)return dp[i][k];

    int l=upper_bound(start.begin(),start.end(),job[i][1])-start.begin();

    int take=job[i][2]+func(l,start,job,n,k-1);

    int leave=func(i+1,start,job,n,k);

    return dp[i][k]=max(take,leave);
}
    int maxValue(vector<vector<int>>& events, int k) {
       
        int n=events.size();
        dp.resize(n+1,vector<int>(k+1,-1));
        vector<int>start;
        for(int i=0;i<n;i++)
        {
            start.push_back(events[i][0]);
        }

        


        sort(events.begin(),events.end());
        sort(start.begin(),start.end());
        return func(0,start,events,n, k);
    }
};