class Solution {
public:
int func(int i,vector<vector<int>>&v,vector<int>&dp)
{
    if(dp[i]!=-1)return dp[i];
    int ans=1;
    for(auto ele:v[i])
    {
        ans=max(ans,1+func(ele,v,dp));
    }
    return dp[i]=ans;
}
    int maxJumps(vector<int>& arr, int d) {
        
        int n=arr.size();
        vector<vector<int>>v(n);

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=min(n-1,i+d);j++)
            {
                 if(arr[j]<arr[i])
                 {
                    v[j].push_back(i);
                 }
                 else break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i-1;j>=max(0,i-d);j--)
            {
                 if(arr[j]<arr[i])
                 {
                    v[j].push_back(i);
                 }
                 else break;
            }
        }
        vector<int>dp(n,-1);
        for(int i=0;i<n;i++)
        {
            if(dp[i]==-1)func(i,v,dp);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};