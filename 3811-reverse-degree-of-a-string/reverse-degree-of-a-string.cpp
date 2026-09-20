class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int ans=0;
        int k=1;
        for(int i=0;i<n;i++){
            ans+=k*('z'-s[i]+1);k++;
        }
        
    return ans;}
};