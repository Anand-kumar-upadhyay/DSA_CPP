class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int m=-1;

        for(auto ele:nums)
        {
            mp[ele]++;
            m=max(m,ele);
        }
        if(mp[m]<2)return false;
        if(n>m+1)return false;


        for(int i=1;i<m;i++)
        {
            if(mp[i]==0)return false;
        }
   return true; }
};