class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int n=nums.size();

     
        unordered_set<int>st;

        for(auto ele:nums)st.insert(ele);


        
       
       

      
        int x=nums[0];

        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                x+=nums[i];
            }
            else  break;
        }



           
                int y=x;
                while(st.find(y)!=st.end())
                {
                    y++;
                }
               


            







        return y;

    }
};