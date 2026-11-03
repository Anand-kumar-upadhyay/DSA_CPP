class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int n=nums.size();
        int ans=0;
        int m=0;
        for(auto ele:nums)m=max(m,ele);
        for(auto ele:nums)
            {
                ans+=m-ele;
            }
        
    return ans;}
};