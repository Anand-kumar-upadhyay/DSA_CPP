class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        n=n-10;
        int x=9;
        int i=1;
        while(n>=0){
            if(i%2==0&&n<x)return false;
           if(n<x) return true;
            else {
                n-=x;
                  x--;
                i++;
                 }
        }
        
   return true; }
};