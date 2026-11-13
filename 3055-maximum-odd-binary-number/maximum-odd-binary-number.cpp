class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n=s.size();
        string ans;

        for(int i=0;i<n;i++)ans+='0';
        int a=0;

        for(auto ele:s)if(ele=='1')a++;

        for(int i=0;i<n;i++)
        {
            if(a>1)
            { 
            ans[i]='1';
            a--;
            }
        }
        ans[n-1]='1';

   return ans; }
};