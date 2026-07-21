class Solution {
public:

    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        int ans=0;
        vector<int>pre;
        vector<int>suf;
        int i=0;
        int t=0;

        for(auto ele:s)
        {
            if(ele=='1')t++;
        }

        while(i<n)
        {
            int a=0;
            while(i<n&&s[i]=='0')
            {
                i++;
                a++;
            }
            if(i==n)break;

            while(i<n&&s[i]=='1')
            {
                i++;
            }

            int b=0;
            int j=i;
            while(j<n&&s[j]=='0')
            {
                j++;
                b++;
            }
            pre.push_back(a);
            suf.push_back(b);
        }

        for(int i=0;i<pre.size();i++)
        {
           if(pre[i]>0&&suf[i]>0)
           {
            ans=max(ans,pre[i]+suf[i]+t);
           }
        }

        if(ans<t)return t;



   else return ans; }
};