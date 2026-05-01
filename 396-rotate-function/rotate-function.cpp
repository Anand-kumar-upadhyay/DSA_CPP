class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int a=0;int b=0;


        for(int i=0;i<n;i++)
        {
            a+=nums[i];
            b+=i*nums[i];
        }

        int ans=b;
        for(int i=1;i<n;i++)
        {
            b=b+(a-n*nums[n-i]);
            
            ans=max(ans,b);


        }
   return ans; }
};