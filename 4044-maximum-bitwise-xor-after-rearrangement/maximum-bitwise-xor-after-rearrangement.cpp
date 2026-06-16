class Solution {
public:
    string maximumXor(string s, string t) {
    
    string ans="";
    int i=0;
    int a=0;
    int b=0;
    int n=s.size();

    while(i<n)
    {
        if(t[i]=='1')a++;
        else b++;
        i++;
    }
    i=0;

    while(i<n)
    {
        if(s[i]=='0')
        {
            if(a!=0)
            {
                ans+='1';
                a--;

            }
            else ans+='0';
        }
        else
        {
            if(b!=0)
            {
                ans+='1';
                b--;

            }
            else ans+='0';

        }
        i++;
    }


    return ans;}
};