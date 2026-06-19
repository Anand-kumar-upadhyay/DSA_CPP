class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int m=0;
        for(auto ele:gain)
        {
            m+=ele;
            ans=max(ans,m);

        }
        
   return ans; }
};