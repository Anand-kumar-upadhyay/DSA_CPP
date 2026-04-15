class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int a=1;
       int h=nums[0];
       for(int i=1;i<n;i++)
       {
        if(nums[i]==h)a++;
        else
        {
            a--;
            if(a==0)
            {h=nums[i];
            a=1;
            }
        }
       }
       return h;
        
   return -1; }
};