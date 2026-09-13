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

          if(h==3)
          {
            vector<int>v=ele.second;
            if(v[1]-v[0]==v[2]-v[1])ans++;
          }
        }


        return ans;


        

    }
};