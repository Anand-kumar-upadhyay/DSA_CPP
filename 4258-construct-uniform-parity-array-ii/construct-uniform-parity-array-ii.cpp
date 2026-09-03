class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int n=nums1.size();

    int a=1;
    int b=1;
    int m=INT_MAX;
    for(int i=0;i<n;i++) 
    {if(nums1[i]%2==0)a=0;

    m=min(m,nums1[i]);
    }

    if(a||m%2==1)return true;


    for(int i=0;i<n;i++) if(nums1[i]%2!=0)b=0;

    if(b)return true;
    return false;
    }
};