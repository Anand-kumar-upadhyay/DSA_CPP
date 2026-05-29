class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
            int m=INT_MAX;
        for(int i=0;i<n;i++){
            int j=nums[i];
            int sum=0;
            while(j>0){
                int k=j%10;
                 sum+=k;
                j=j/10;
            }
            m=min(m,sum);
            }
    
        
   return m; }
};