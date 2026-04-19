class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int ans=0;

        for(int i=0;i<n;i++)
        {
            int val=nums2[i];

            int low=0;
            int high=min(i,m-1);
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                
                if(nums1[mid]>val)low=mid+1;
                else 
                {
                    if(i-mid>=0)ans=max(ans,(i-mid));
                    high=mid-1;
                }
            }
        }

   return ans; }
};