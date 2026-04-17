class Solution {
public:

int func(int i,int j,string word1,string word2,vector<vector<int>>&dp,int m,int n)
{
    if(i==m)return n-j;
    if(j==n)return m-i;

    if(dp[i][j]!=-1)return dp[i][j];
    if(word1[i]==word2[j])return func(i+1,j+1,word1,word2,dp,m,n);
    int a=0;
    int b=0;
    int c=0;
    {
        a=1+func(i,j+1,word1,word2,dp,m,n);
        b=1+func(i+1,j,word1,word2,dp,m,n);
        c=1+func(i+1,j+1,word1,word2,dp,m,n);
    }
    return dp[i][j]=min({a,b,c});

}
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

        return func(0,0,word1,word2,dp,m,n);


    }
};