class Solution {
public:
int gcd(int a,int b)
{
    if(b==0)return a;

    return gcd(b,a%b);
}
    int maxLength(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        

        for(int i=0;i<n;i++)
        {
            int a1=1;
            int a=0;
            int c=1;
            for(int j=i;j<n;j++)
            {
                a1*=nums[j];
                 a=gcd(a,nums[j]);
                 c=lcm(c,nums[j]);

                 if(a1==a*c)ans=max(ans,j-i+1);
                 if(a1>a*c)break;

            }
        }


        return ans;
    }
};