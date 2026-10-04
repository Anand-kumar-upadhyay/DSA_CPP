class Solution {
public:
    vector<int> fairCandySwap(vector<int>& al, vector<int>& bob) {
        

        int n=al.size();
        
        sort(bob.begin(),bob.end());

        vector<int>ans;
        int s1=0;
        int s2=0;

        for(auto ele:al)s1+=ele;

        for(auto ele:bob)s2+=ele;

        for(int i=0;i<n;i++)
        {
            int y=al[i]+(s2-s1)/2;
            

            int l=0;
            int h=bob.size()-1;

            while(l<=h)
            {
                int mid=(l+h)/2;

                if(bob[mid]==y)
                {
                    ans.push_back(al[i]);
                    ans.push_back(y);
                    return ans;

                }

                else if(bob[mid]<y)l=mid+1;
                else h=mid-1;

            }
        }

    return ans;}
};