class Solution {
public:
vector<int>dp;
int func(int i,vector<int>&start,vector<vector<int>>&job,int n)
{
    if(i==n)return 0;

    if(dp[i]!=-1)return dp[i];

    int l=lower_bound(start.begin(),start.end(),job[i][1])-start.begin();

    int take=job[i][2]+func(l,start,job,n);

    int leave=func(i+1,start,job,n);

    return dp[i]=max(take,leave);
}
    int jobScheduling(vector<int>& start, vector<int>& end, vector<int>& pro) {
        
        vector<vector<int>>job;
        int n=start.size();
        dp.resize(n+1,-1);

        for(int i=0;i<n;i++)
        {
            job.push_back({start[i],end[i],pro[i]});

        }


        sort(job.begin(),job.end());
        sort(start.begin(),start.end());
        return func(0,start,job,n);
    }
};