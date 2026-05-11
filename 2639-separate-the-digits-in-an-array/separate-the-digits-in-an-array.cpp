class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
      vector<int>ans;
      int n=nums.size();

      for(int i=0;i<n;i++)

      {
        string g=to_string(nums[i]);
        int j=g.size();
        int k=0;

        while(k<j)
        {
            int r=g[k]-'0';
            ans.push_back(r);
            k++;
        }
      }



      return ans;

    }
};