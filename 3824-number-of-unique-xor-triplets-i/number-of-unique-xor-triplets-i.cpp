class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();

        int k=-1;
        for(auto ele:nums)
        {
            k=max(k,ele);
        }
        if(k<=2)return k;
        int z=1;
        while(true)
        {
            int y=pow(2,z);
            if(y>k)return y;
            z++;
        }

        
        
    return 0;}
};