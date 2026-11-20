class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        
        int n=nums.size();

        int ans=INT_MAX;

        for(int i=0;i<n-1;i+=2)
        {
            string a=to_string(nums[i]);
            a+=to_string(nums[i+1]);
            
            int c=stoi(a);
            ans=min(ans,c);


        }
        
   return ans; }
};