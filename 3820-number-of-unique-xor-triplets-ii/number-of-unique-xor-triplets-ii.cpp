class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        

        int n=nums.size();
        unordered_set<int>st1;


        for(auto ele:nums)
        {
            st1.insert(ele);
        }
        vector<int>v;
       for(auto ele:st1)
        {
           
            v.push_back(ele);
            
        }
         unordered_set<int>st;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
               
                    st.insert(v[i]^v[j]);
                
            }
        }


        unordered_set<int>st2;
        
            for(int j=0;j<v.size();j++)
            {
                for(auto ele:st)
                st2.insert(v[j]^ele);
                
            }
        

        return st2.size();
    }
};