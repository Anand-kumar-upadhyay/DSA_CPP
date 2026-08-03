class Solution {
public:
vector<int>dp;
int func(vector<int>& piles,int i)
{
    if(i>=piles.size())return 0;
    if(dp[i]!=-1)return dp[i];

    int ans=0;
    int a=piles[i]-func(piles,i+1);
    int b=(i<piles.size()-1)?piles[i]+piles[i+1]-func(piles,i+2):piles[i];
    int c=(i<piles.size()-2)?piles[i]+piles[i+1]+piles[i+2]-func(piles,i+3):b;
    
    ans=max(a,max(b,c));
    return dp[i]=ans;
}
    string stoneGameIII(vector<int>& st) {
       int n=st.size();
       if(n==1)
       {
        if(st[0]>0)return"Alice";
        else return "Bob";
       }
    dp.resize(n+1,-1);
    int a= func(st,0);
    
    if(a>0)return "Alice";
    else if(a<0)return "Bob";
    else return "Tie"; 
    }
};