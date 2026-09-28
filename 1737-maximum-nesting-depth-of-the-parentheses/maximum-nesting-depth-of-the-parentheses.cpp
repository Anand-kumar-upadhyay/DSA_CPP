class Solution {
public:
    int maxDepth(string s) {
        
        int n=s.size();
        int a=0;
        int ans=-10;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')a++;
            if(s[i]==')')a--;
            ans=max(ans,a);
        }

   return  ans;}
};