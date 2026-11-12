class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int ans=INT_MIN;
        int i=0;
        for( i=0;i<n-1;i++){
            if(nums[i]<nums[i+1])continue;
            else{
             ans=max(ans,(i+1)-j);
             j=i+1 ;
            }
        }
         ans=max(ans,(i+1)-j);
         int z=0;
         int k=0;
        for( k=0;k<n-1;k++){
            if(nums[k]>nums[k+1])continue;
            else{
             ans=max(ans,(k+1)-z);
             z=k+1 ;
            }
        }
        ans=max(ans,(k+1)-z);
        
        
   return ans; }
};