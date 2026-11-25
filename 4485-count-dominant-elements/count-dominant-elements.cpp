class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        if(n==1)return 1;

        if(nums[0]>=nums[1])ans++;
        

        for(int i=1;i<=n-2;i++)
        {
            if((nums[i-1]+nums[i+1])/2.0<=nums[i])ans++;
        }

        if(nums[n-2]<=nums[n-1])ans++;
        return ans;
    }
};