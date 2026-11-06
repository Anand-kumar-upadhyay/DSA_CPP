class Solution {
public:
    int findMaxK(vector<int>& nums) {
        

        unordered_map<int,int>mp;
        int ans=-1;
        for(auto ele:nums)mp[ele]++;

        for(auto ele:mp)
        {
            int k=ele.first;
            if(mp.find(-k)!=mp.end())
            {
                ans=max(ans,k);
            }
        }
    return ans;}
};