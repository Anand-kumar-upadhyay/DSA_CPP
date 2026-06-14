class Solution {
public:
    bool checkGoodInteger(int n) {
        
        int a=0;
        int b=0;
        while(n>0)
        {
            int r=n%10;
            a+=r;
            b+=(r*r);
            n=n/10;
        }
    
  return b-a>=50;  }
};