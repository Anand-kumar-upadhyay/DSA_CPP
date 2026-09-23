class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();

        long long s=0;

        for(auto ele:nums)s+=ele;
        int t=s-x;

        int l=0;
        int curr=0;
        int m=-1;
        int c=0;

        for(int i=0;i<n;i++)
        {
            c+=nums[i];

            while(c>t&&l<n)
            {
                c-=nums[l];
                l++;
            }
            if(c==t)m=max(m,i-l+1);

        }
        if(m==-1)return m;
        return n-m;

    }
};