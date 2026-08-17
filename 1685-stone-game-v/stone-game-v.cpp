class Solution {
public:
vector<vector<int>>dp;
int func(int i,int j,int sum,vector<int>& st)
{
    if(i==j)return 0;
    int p=0;
    int ans=0;
    if(dp[i][j]!=-1)return dp[i][j];

    for(int k=i;k<j;k++)
    {
        p+=st[k];
        sum-=st[k];

        if(p<sum)ans=max(ans,func(i,k,p,st)+p);

        else if(p>sum) ans=max(ans,func(k+1,j,sum,st)+sum);

        else ans=max({ans,func(k+1,j,sum,st)+sum,func(i,k,p,st)+p});
    }
    return dp[i][j]=ans;
}
    int stoneGameV(vector<int>& st) 
    {
        int n=st.size();
        dp.resize(502,vector<int>(502,-1));

        int k=0;
        for(auto ele:st)k+=ele;


        return func(0,n-1,k,st);
        
    }
};