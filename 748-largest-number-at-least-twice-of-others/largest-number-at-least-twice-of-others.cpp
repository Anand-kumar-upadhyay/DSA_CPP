class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int lar = INT_MIN;
        int res = 0;
        
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > lar) {
                lar = nums[i];
                res = i;
            }
        }
        
        
        for (int i = 0; i < nums.size(); i++) {
            if (i == res) continue;
            if (lar < 2 * nums[i]) return -1;
        }
        
        return res;
    }
};