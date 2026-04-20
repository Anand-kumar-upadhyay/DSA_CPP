class Solution {
public:

vector<vector<int>>dp;
int func(int i,int j,string &s, string &t)
{
    
    if(j==t.size())
    {
    return 1;
    }
    if(dp[i][j]!=-1)return dp[i][j];

    if(i>=s.size())return 0;

    int take=func(i+1,j,s,t);
    int leave=0;
    if(s[i]==t[j]) leave=func(i+1,j+1,s,t);
    return dp[i][j]=take+leave;
    

}
    int numDistinct(string s, string t) 
    {
        dp.resize(s.size()+1,vector<int>(t.size()+1,-1));
        
        return func(0,0,s,t);
      
    }
};