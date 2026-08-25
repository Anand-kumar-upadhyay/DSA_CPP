class Solution {
public:
    int missingMultiple(vector<int>& nums, int k)
    {
        
        unordered_map<int,int>m;
        int a=k;
        for(auto ele:nums)m[ele]++;
        while(true)
        {
            if(m.find(a)==m.end())
            {return a;
            break;
            }
            a+=k;
        }
        
    return 0;}
};