class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int n=s.size();
        
        int i=0;
        int j=0;
        int a=0;
        string ans="";

        while(j<n)
        {
            if(s[j]=='1')a++;

            while(a>k)
            {
               
                if(s[i]=='1')a--;
                i++;
            }

            while(a==k&&s[i]=='0')i++;




            if(a==k)
            {
                  string p=s.substr(i,j-i+1);
                    if(ans==""||p.size()<ans.size()|| (p.size()==ans.size()&&p<ans))
                    {
                        ans=p;
                    }
            }

            j++;
        }

       
   return ans; }
};