class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();

       vector<int>f(101,0);

        for(auto ele:nums)
        {
            f[ele]++;
        }
        vector<int>ans;

    while(true)
        {
            for(int i=1;i<=100;i++)
            {
                
                if(f[i]>0)ans.push_back(i);
                f[i]--;
            }
            if(ans.size()==n)return ans;
            

        }
        return ans;

        
    }
};