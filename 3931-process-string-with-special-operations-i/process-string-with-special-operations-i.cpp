class Solution {
public:
    string processStr(string s) {
       string a="";
       int n=s.size();

       int i=0;
       while(i<n)
       {
        if(s[i]=='#')
        {
            a+=a;
        }
        else if(s[i]=='*')
        {
            if(a!="")a.pop_back();
        }
        else if(s[i]=='%')
        {
            reverse(a.begin(),a.end());
        }
        else a+=s[i];

        i++;
       }

       return a;

    }
};