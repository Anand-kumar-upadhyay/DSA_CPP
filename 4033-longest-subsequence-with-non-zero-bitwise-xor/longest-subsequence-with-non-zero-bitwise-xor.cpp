class Solution {
public:
    int longestSubsequence(vector<int>& nums)
    {
        int n=nums.size();
        int a=0;
        int  sum=0;
        for(int i=0;i<n;i++)
        {
            a=a^nums[i];
          if(nums[i]==0)sum++;
        }
        if(sum==n)return 0;
        if(a==0)return n-1;
        
   return n; }
};