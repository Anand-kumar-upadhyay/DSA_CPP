class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }

        for(auto ele:mp)
        {
            int k=ele.first;
            int h=ele.second.size();

          if(h>=3)
          {
            vector<int>v=ele.second;
            bool f=1;
           for(int k=1;k<v.size()-1;k++)
           {
            if(v[k]-v[k-1]!=v[k+1]-v[k])f=0;

           }
           if(f)ans++;
          }
        }


        return ans;

    }
};