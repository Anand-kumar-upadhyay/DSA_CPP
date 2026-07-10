class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n,0);
        pre[0]=nums[0];
        for(int i=1;i<n;i++)pre[i]=max(pre[i-1],nums[i]);

        //for(auto ele:pre)cout<<ele<<" ";

        int ans=0;


        for(int i=0;i<n;i++)
        {
            if(i-k>=0)ans=max(ans,nums[i]+pre[i-k]);

        }




        return ans;

    }
};