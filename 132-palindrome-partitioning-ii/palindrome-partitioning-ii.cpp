class Solution {
public:
vector<vector<int>>dp;
bool pal(string &s,int i,int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
int func(string &s,int i,int j)
{
    if(pal(s,i,j))return 0;
    if(dp[i][j]!=-1)return dp[i][j];


    int ans=INT_MAX;
    for(int k=i;k<j;k++)
    {
        if(pal(s,k+1,j))
        {
            ans=min(ans,func(s,i,k)+1);
        }
    }
    return dp[i][j]=ans;

}
    int minCut(string s) {
        int n=s.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        return func(s,0,s.size()-1);

    }
};