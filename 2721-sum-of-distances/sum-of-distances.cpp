class Solution {
public:

    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n,0);
        unordered_map<int,pair<int,int>>mp;
         
         for(int i=0;i<n;i++)
         {
            if(mp.find(nums[i])==mp.end()) mp[nums[i]].first=i;
            else ans[mp[nums[i]].first]+=i-mp[nums[i]].first;

            mp[nums[i]].second++;
         }

         unordered_map<int,tuple<int,int,long long>>m;
         
         for(int i=0;i<n;i++)
         {
            if(m.find(nums[i])==m.end())
            { 
                 m[nums[i]]={1,i,ans[i]};
                 
            }
            else
            {
                auto[e1,e2,e3]=m[nums[i]];
                auto[a1,a2]=mp[nums[i]];

                e3+=(long long)e1*(i-e2);
                e3-=(long long)(a2-e1)*(i-e2);
                ans[i]=e3;
                m[nums[i]]={e1+1,i,e3};

            }


         }

    return ans;}
};