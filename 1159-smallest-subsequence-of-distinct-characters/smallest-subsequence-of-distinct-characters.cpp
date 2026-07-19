class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.size();
        string ans="";
        vector<int>v(26,false);
        unordered_map<char,int>mp;
        for(auto ele:s)
        {
            mp[ele]++;
        }
        for(auto ele:s)
        {
            mp[ele]--;
            if(v[ele-'a']==1)continue;

            while(ans.size()>0&&ans.back()>ele&&mp[ans.back()]>0)
            {
                v[ans.back()-'a']=0;
                ans.pop_back();
            }
            ans+=ele;
            v[ele-'a']=1;

        }




        return ans;
    }
};