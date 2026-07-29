class Solution {
public:
    vector<int> countBits(int n) {
        
        int i=0;
        vector<int>ans;

        while(i<=n)
        {
            int n=i;
            int h=0;
            
            while(n>0)
            {
                h+=n%2;
                n=n/2;
            }
            ans.push_back(h);
            i++;
        }



   return ans; }
};