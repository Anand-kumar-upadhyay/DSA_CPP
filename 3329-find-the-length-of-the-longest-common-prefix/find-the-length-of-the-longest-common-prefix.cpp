class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int ans=0;
        unordered_set<string>st;
        for(int i=0;i<n;i++)
        {
            string s="";
            string y=to_string(arr1[i]);
            for(int j=0;j<y.size();j++)
            {
                s+=y[j];
                st.insert(s);
            }
        }

        for(int i=0;i<arr2.size();i++)
        {
            string s="";
            string y=to_string(arr2[i]);
            for(int j=0;j<y.size();j++)
            {
                s+=y[j];

                if(st.find(s)!=st.end())
                {
                    ans=max(ans,(int)s.size());
                }
            }
        }



   return ans; }
};