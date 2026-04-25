class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n=nums.size();

        int m=-1;
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>m)
            {
                m=nums[i];
                j=i;
        
            }
            
        }
        long long t=0;
        long long r=0;

        for(int i=0;i<n;i++)t+=nums[i];
        t+=nums[j];
        for(int i=0;i<=j;i++)r+=nums[i];

        
        if(r>t-r)return 0;
        else if(r<t-r)return 1;
        else return -1;
    }
};