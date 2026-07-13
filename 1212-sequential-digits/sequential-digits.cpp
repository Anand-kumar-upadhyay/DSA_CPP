class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int>v;
        string s="123456789";
        int n=s.size();

        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=i;j<n;j++)
            {
            f=f*10+s[j]-'0';
            v.push_back(f);
            }
        }
        vector<int>ans;

        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=low&&v[i]<=high)ans.push_back(v[i]);
        }
        sort(ans.begin(),ans.end());

   return ans;
    }
};