class Solution {
public:
    
    int minMirrorPairDistance(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>m;
        int ans=INT_MAX;
        int q=0;
        for(int i=0;i<n;i++)
        {
             if(m.find(nums[i])!=m.end())
            {
             int k=i-m[nums[i]];
                ans=min(ans,k);
            }
            
                 q=0;
            while(nums[i]>0)
                {
            
                q=q*10+nums[i]%10;
                 nums[i]/=10;
                }
                m[q]=i;
                
                 
        }
        
     if(ans==INT_MAX)  return -1;
    else return ans;}
};