class Solution {
public:
    int countConsistent(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++)
        {
            int a=INT_MAX;
            int b=INT_MAX;
            for(int j=i;j<n;j++)
            {
                b=b&nums[j];
                a=min(a,nums[j]);

            if(b==a)ans++;
            }
        }
   return ans; }
};