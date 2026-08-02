class Solution {
public:
vector<vector<int>>dp;
int func(vector<int>& piles,int i,int j)
{
    if(i==j)return piles[i];
    if(dp[i][j]!=-1)return dp[i][j];
   return dp[i][j]=max (piles[i]-func(piles,i+1,j),piles[j]-func(piles,i,j-1));
   
}
    bool stoneGame(vector<int>& piles) {
    int n=piles.size();
    dp.resize(n+1,vector<int>(n+1,-1));
    int a= func(piles,0,n-1);
    
    if(a>0)return true;
    else return false;
    }
};