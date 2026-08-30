class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n=nums.size();
        int a=INT_MAX;
        int b=INT_MIN;
        int c=-1;
        int d=-2;

        for(int i=0;i<n;i++)
        {
            if(a>nums[i])
            {
                d=i;
                a=nums[i];

            }
            if(b<nums[i])
            {
                c=i;
                b=nums[i];

            }
        }
        //cout<<c<<" "<<d<<endl;
        int p=max(c,d)+1;
        int q=max(n-c,n-d);
        int r=(c+1+(n-d));
        int s=((n-c)+d+1);

        cout<<p<<" "<<q<<endl;
        cout<<r<<" "<<s<<endl;

      


   return min({p,q,r,s}); }
};