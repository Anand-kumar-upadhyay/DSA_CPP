class Solution {
public:
long long func(long long a,long long b)
{
    if(b==0)return a;
    return func(b,a%b);
}

    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        int m=-1;

        for(auto ele:nums)
        {
            m=max(m,ele);
            long long j=func(m,ele);
            v.push_back(j);
        }


        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        long long ans=0;


        while(i<j)
        {
            ans+=func(v[i],v[j]);
            i++;
            j--;

        }

   return ans; }
};