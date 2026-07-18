class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        
        long long ans=0;
        ans=s;
        if(n==1)return ans;

        ans+=(long long)m*(long long)(n/2);
        ans-=(n/2)-1;
        return ans;


    }
};