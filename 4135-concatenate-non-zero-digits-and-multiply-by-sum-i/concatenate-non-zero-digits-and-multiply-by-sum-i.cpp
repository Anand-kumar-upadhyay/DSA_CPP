class Solution {
public:
    long long sumAndMultiply(int n) 
    {
        long long s=0;
        long long ans=0;
        string st="";
        st+=to_string(n);
        for(auto ele:st)
        {
            if(ele-'0'!=0)
            {ans=ans*10+ele-'0';
             s+=ele-'0';
            }
        }
        return ans*s;

        
    }
};