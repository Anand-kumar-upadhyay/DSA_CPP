class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();

        int h=1;
        vector<int>ans;
        ans.push_back(nums[0]);


        for(int i=1;i<n;i++)
        {
            
                if(nums[i]==nums[i-1])
                {
                    h++;
                
                if(h<=k)
                {
                ans.push_back(nums[i]);
                }
                }
            else 
            {
                h=1;
                ans.push_back(nums[i]);
            }
            
        }

        
   return ans; }
};