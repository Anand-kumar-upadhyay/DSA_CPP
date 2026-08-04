class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int n=nums.size();
       
        unordered_map<int,int>mp;
        int m=-1;

        for(auto ele:nums)
        {
        mp[ele]++;
        m=max(m,ele);
        }
        vector<int>v(m+1,0);


        for(auto ele:mp)
        {
            v[ele.first]=ele.second*ele.first;
        }

        vector<int>dp(m+1,0);

        dp[0]=v[0];
        dp[1]=max(v[0],v[1]);
    
        for(int i=2;i<=m;i++)
        {
            
            dp[i]=max(dp[i-1],v[i]+dp[i-2]);

        }



        return dp[m];
    }
};