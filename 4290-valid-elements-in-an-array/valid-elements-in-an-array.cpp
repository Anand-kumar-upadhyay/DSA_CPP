class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(nums[0]);
        if(n==1)return ans;

        for(int i=1;i<n-1;i++)
        {
            int h=nums[i];
            bool flag1=true;
            bool flag2=true;
            for(int j=0;j<i;j++)
            {
                if(nums[j]>=h)flag1=false;

            }
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]>=h)flag2=false;

            }
            if(flag1 || flag2)ans.push_back(h);
        }
        ans.push_back(nums[n-1]);



        return ans;

    }
};