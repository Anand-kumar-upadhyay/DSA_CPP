class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        int m=INT_MIN;
        int n=nums.size();
        if(n==1)return n;
        unordered_map<int,int>mp;
        int j=0;
        int i=0;
        while(j<n)
        {
            
        mp[nums[j]]++;
                    
        while(mp[nums[j]]>k)
        {
        mp[nums[i]]--; 
        i++;
        }     
            ans=(j-i+1);
            m=max(m,ans);        
            j++;
        }

    ans=j-i;
    m=max(m,ans);

    return m;}
};