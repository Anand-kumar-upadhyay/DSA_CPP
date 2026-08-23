class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        
        int n=nums.size();
        vector<vector<int>> ans;
        int i=lower;

        unordered_map<int,int>mp;
        for(auto ele:nums)
        {
            mp[ele]++;
        }

        vector<int>v; 
        while(i<=upper)
        {
            if(mp.find(i)!=mp.end())
            { 
            if(v.size()==1)v.push_back(v.back());

            if(v.size()!=0) ans.push_back(v);

            v.clear();
            }
            else 
            {
                if(v.size()==0||v.size()==1)
                {
                    v.push_back(i);
                }
                if(v.size()>1)
                {
                    v.pop_back();
                    v.push_back(i);
                }

            }
            i++;
        }
        if(v.size()==1)v.push_back(v.back());

        if(v.size()!=0) ans.push_back(v);




   return ans; }
};