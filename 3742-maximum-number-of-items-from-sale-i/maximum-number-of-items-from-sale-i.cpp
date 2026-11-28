class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int bud) {
        
        int n=items.size();
        vector<int>dp(bud+1,0);
        int ans=0;
        int m=INT_MAX;

        for(int i=0;i<n;i++)
        {
            int g=0;
            for(int j=0;j<n;j++)
            {
                if(j!=i&& items[j][0]%items[i][0]==0)g++;

            }
            m=min(m,items[i][1]);

            for(int k=bud;k>=items[i][1];k--)dp[k]=max(dp[k],dp[k-items[i][1]]+1+g);

        }

        for(int i=1;i<=bud;i++)
        {
            ans=max(ans,dp[i]+(bud-i)/m);
        }




    return ans;}
};