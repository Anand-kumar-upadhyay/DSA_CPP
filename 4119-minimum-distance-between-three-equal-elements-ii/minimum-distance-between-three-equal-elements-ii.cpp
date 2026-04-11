class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<n;i++)

        {
            mp[nums[i]].push_back(i);
            if(mp[nums[i]].size()>=3)
            {

                int y=0;
                int z=0;
                int r=0;
                vector<int>&v=mp[nums[i]];
                int s=v.size();
                z=v[s-1];
                y=v[s-2];
                r=v[s-3];
                ans=min(ans,abs(r-y) + abs(y-z) + abs(z-r));
                
            }

        }


if(ans==INT_MAX)return -1;
else return ans;
    }
};