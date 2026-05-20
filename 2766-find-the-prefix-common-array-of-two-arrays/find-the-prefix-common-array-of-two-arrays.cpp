class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n=a.size();
        vector<int>ans(n,0); 
        
        vector<int>v(n+1,0);
        int x=0;
         if(a[0]==b[0])
         {
         ans[0]=1;
         x++;
         }
         
        v[a[0]]++;
        v[b[0]]++;
        for(int i=1;i<n;i++){
           if(v[a[i]]==1) {
            x++;
           }
           if(v[a[i]]==0){
            v[a[i]]=1;
           }
           if(v[b[i]]==1) {
            x++;
           }
           if(v[b[i]]==0){
            v[b[i]]=1;
           }
           
        
        ans[i]=x;
        }
    return ans;}
};