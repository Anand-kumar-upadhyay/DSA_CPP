class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> count;
    int n = nums.size();


    for (int i = 0; i <= n - k; i++) {
        unordered_set<int> seen;
        for (int j = i; j < i + k; j++) {
            if (!seen.count(nums[j])) { 
                count[nums[j]]++;
                seen.insert(nums[j]);
            }
        }
    }

    int result = -1;
    for (auto& ele : count) {
        if (ele.second == 1) {
            result = max(result, ele.first);
        }
    }

    return result;
    }
};