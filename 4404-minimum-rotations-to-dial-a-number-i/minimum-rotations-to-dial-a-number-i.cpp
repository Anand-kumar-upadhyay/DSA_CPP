class Solution {
public:
    int minRotations(string s) {

        int n=s.size();

        int ans=0;
        int c=0;

        for(int i=0;i<n;i++)
        {
            int x=s[i]-'0';
            int y=abs(c-x);
        

            ans+=min(y,10-y);
            c=x;

        }
    return ans;}
};