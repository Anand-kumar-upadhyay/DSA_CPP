class Solution {
public:
vector<int>dp;

int func(vector<int>& coins, int a){

    if(a==0)return 0;
    if(dp[a]!=-2)return dp[a];
    
    int result=INT_MAX-1;
    for(int i=0;i<coins.size();i++)
    {
        if(a-coins[i]<0)continue;
        result=min(result,1+func(coins,a-coins[i]));
        
    }
    if(result==INT_MAX)return dp[a]=INT_MAX;
    return dp[a]=result;
}

    int coinChange(vector<int>& coins, int a) {
     
      dp.resize(100005,-2);
      int ans=func(coins,a);
      if(ans==INT_MAX-1)return -1;  
    else return ans;}
};