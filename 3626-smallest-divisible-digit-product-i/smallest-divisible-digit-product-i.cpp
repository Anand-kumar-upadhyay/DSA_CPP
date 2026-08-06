class Solution {
public:
int product(int n){
    int k=1;
        while(n>0){
            int r=n%10;
            k=k*r;
            n=n/10;
        }
    return k;
}
    int smallestNumber(int n, int t) {
        while(true){
            int k=product(n);
     if(k%t==0)return n;
            else n++;
        }
        }
};