class Solution {
public:
    int getMinDistance(vector<int>& nums, int tar, int star) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=star;i<n;i++)
        {
            if(nums[i]==tar)ans=min(ans,abs(star-i));


        }
        for(int i=star;i>=0;i--)
        {
           if(nums[i]==tar)ans=min(ans,abs(star-i)); 

        }
    return ans;}
};