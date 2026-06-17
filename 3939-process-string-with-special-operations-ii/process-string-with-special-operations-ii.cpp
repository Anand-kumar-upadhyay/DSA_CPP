class Solution {
public:
    char processStr(string s, long long k) {
        long long n=0;

        for(auto c:s)
        {
            if(islower(c))n++;
            else if(c=='*')
            {
            if(n>0)n--;
            }
            else if(c=='#')n*=2;
        }
    
        if(k>=n)return '.';

        for(int i=s.size()-1;i>=0;i--)
        {
            if(islower(s[i]))
            {
                if(k==n-1)return s[i];
                n--;
            }
            else if(s[i]=='*')
            {
                n++;
            }
            else if(s[i]=='#')
            {
                n=n/2;
                k=k%n;
            }
            else if(s[i]=='%')
            {
                k=n-1-k;

            }

        }

    return '.';}
};