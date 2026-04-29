class Solution {
public:
    long long minOperations(vector<int>& nums) {
      int n=nums.size();
    
      long long x=0;
      for(int i=1;i<n;i++)
      {
        if((long long)nums[i]<nums[i-1]+x)
        {
            
            
               
                long long r=nums[i-1]+x-nums[i];
                x=max(x,r);
            
        }
      }




return x;
    }
};