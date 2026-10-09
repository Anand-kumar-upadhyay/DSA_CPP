class Solution {
public:
    int minInsertions(string s) {
        
        int n=s.size();

        int ans=0;

        stack<char>st;
        

        for(int i=0;i<n;i++)
        {

            if(s[i]=='(')st.push(s[i]);

            else
            {

            if(i+1<s.size() && s[i+1]==')')
            {
                if(st.size()>0)st.pop();

                
                else
                {
                    ans++;
                }

             i++;
            }

            else if(st.size()>0)
            {
                st.pop();
                ans++;
            }

            else 
            {
                ans+=2;

            }






            }

           
        }
        ans+=st.size()*2;


         
    return ans;}
};