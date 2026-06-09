class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long m=INT_MAX;
        long long n=0;
        for(auto ele:nums)
            {
                if(m>ele)
                {
                    m=ele;
                }
                if(n<ele)
                {
                    n=ele;
                }
            }
        long long ans=(n-m)*k;
   return ans; }
};