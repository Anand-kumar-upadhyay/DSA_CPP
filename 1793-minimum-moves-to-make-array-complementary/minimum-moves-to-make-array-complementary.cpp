class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n=nums.size();
        vector<int>v(2*limit+2,0);

        for(int i=0;i<n/2;i++)
        {
            
            int a=min(nums[i],nums[n-i-1]);
            int b=max(nums[i],nums[n-i-1]);
            v[2]+=2;
            v[a+1]-=2;
            v[a+1]+=1;
            v[a+b]-=1;

            v[a+b+1]+=1;
            v[b+limit+1]-=1;
            v[b+limit+1]+=2;
            
        }
        int ans=INT_MAX;

        for(int i=1;i<=2*limit;i++)v[i]+=v[i-1];

        for(int i=2;i<=2*limit;i++)ans=min(ans,v[i]);
  return ans;  }
};