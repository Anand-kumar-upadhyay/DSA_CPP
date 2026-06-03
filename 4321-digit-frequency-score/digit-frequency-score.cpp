class Solution {
public:
    int digitFrequencyScore(int n) {
       unordered_map<int,int>mp;

       while(n>0) 
       {
        int r=n%10;
        mp[r]++;
        n=n/10;
       }
       int ans=0;

       for(auto ele:mp)
       {
        ans+=ele.first*ele.second;
       }
   return ans; }
};