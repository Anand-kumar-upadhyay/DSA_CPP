class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int a=nums[0],b=nums[0];
        for(int i=1;i<nums.size();i++){
            if(a>nums[i]) a=nums[i];
            if(b<nums[i]) b=nums[i];
        }
        int i=b;
        while(i>=1){
            if(a%i==0   &&  b%i==0 ){
                return i;
            }
            i--;
        }
        return 0;

        
            
        



        
    }
};