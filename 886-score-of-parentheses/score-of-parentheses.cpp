class Solution {
public:
    int scoreOfParentheses(string s) {
        

        int n=s.size();
      
        stack<int>st;

        st.push(0);



        for(int i=0;i<n;i++)
        {

            if(s[i]=='(')st.push(0);
            
            
            

            else
            {
                int g=st.top();
                st.pop();

                if(g==0)g=1;
                else g=g*2;

                st.top()+=g;
            }
            
        }





        return st.top();
    }
};