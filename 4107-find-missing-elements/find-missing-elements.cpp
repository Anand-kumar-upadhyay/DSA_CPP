class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int a=105;
        int b=-1;
        unordered_set<int>s;
        for(auto ele:nums)
        {
            a=min(a,ele);
            b=max(b,ele);
            s.insert(ele);
        }
        vector<int>ans;
        for(int i=a;i<=b;i++)
        {
            if(s.find(i)==s.end())ans.push_back(i);

        }
        
    return ans;}
};