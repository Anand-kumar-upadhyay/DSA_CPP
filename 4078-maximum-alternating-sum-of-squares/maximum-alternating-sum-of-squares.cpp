class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums)
    {
        long long ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end(),[](int a,int b)
        {
            return abs(a)<abs(b);
        });

        int i=0;
        int j=1;
        long long h=0;
        while(j<n)
        {
        h+=nums[i]*nums[i];
        j+=2;
        i++;
        }
        
        while(i<n)
        {
        ans+=nums[i]*nums[i];
        i++;          
        }
        
  return ans-h;  }
};