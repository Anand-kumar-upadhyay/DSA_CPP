class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kno) {
        
        int n=s.size();

        unordered_map<string,string>mp;
        string ans="";

        for(auto ele:kno)
        {
            string a=ele[0];
            string b=ele[1];
            mp[a]=b;
        }
        int i=0;

        while(i<n)
        {
            string r="";

            if(s[i]=='(')
            {
                i++;
                while(s[i]!=')'&&i<n)
                {
                    r+=s[i];
                    i++;
                }

                if(mp.find(r)!=mp.end())ans+=mp[r];

                else 
                {
                    r="";
                    ans+="?";
                }
                i++;
            }

            while(s[i]!='('&&i<n)
            {   
                 ans+=s[i];
                    i++;
                
            }
      


        }


    return ans;}
};