class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        
       stack<int>st;
       int ans=0;
       for(int i=0;i<n;i++)
       {
        if(st.size()>0&&s[i]==')'&&s[st.top()]=='(')st.pop();
        else st.push(i);
       }

       int x=n;
       while(st.size()>0)
       {
        int g=st.top();
        st.pop();
        int r=x-g-1;
        ans=max(ans,r);
        x=g;
       }
       ans=max(ans,x);
       return ans;}
};