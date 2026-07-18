class Solution {
public:
    string rearrangeString(string s, char x, char y) 
    {
        int n=s.size();
        string ans="";

        unordered_map<char,int>mp;

        for(auto ele:s)
        {
            mp[ele]++;
        }

        while(mp[y]>0)
        {
            ans+=y;
            mp[y]--;
        }

        for(auto ele:mp)
        {
            int k=ele.second;
            while(k--)
            {
                ans+=ele.first;;
            }
        }



        return ans;
    }
};