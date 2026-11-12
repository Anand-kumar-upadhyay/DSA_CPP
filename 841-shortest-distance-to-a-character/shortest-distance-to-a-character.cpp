class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

       vector<int>v;
       int n=s.size();

       for(int i=0;i<n;i++)
       {
        if(s[i]==c)v.push_back(i);
       }
       vector<int>ans(n,0);

       for(int i=0;i<n;i++)
       {
        
        int k=INT_MAX;
        for(int j=0;j<v.size();j++)
        {
             k=min(k,abs(i-v[j]));

        }
        ans[i]=k;
       }


       return ans;
    }
};