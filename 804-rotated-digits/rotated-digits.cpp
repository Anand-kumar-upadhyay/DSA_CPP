class Solution {
public:
    int rotatedDigits(int n) {
        int ans=0;
        bool a=true;
        bool b=true;

        while(n>0)
        {
            int k=n;
            bool a=true;
            bool b=false;

            while(k>0)
            {
                int r=k%10;
                if(r==3||r==4||r==7)a=false;
                if(r==2||r==5||r==6||r==9)
                {
                    b=true;
                }
                k=k/10;
            }
            if(a&&b)ans++;
            n--;
        }
    return ans;}
};