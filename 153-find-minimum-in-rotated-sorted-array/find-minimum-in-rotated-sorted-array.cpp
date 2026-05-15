class Solution {
public:
    int findMin(vector<int>& nums) {
        int max=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<max){
                max=nums[i];
            }

        }
        
   return max; }
};