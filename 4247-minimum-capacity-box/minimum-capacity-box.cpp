class Solution {
public:
    int minimumIndex(vector<int>& cap, int item) {
        int n=cap.size();
        int ans=-1;
        int v=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(cap[i]>=item&&cap[i]<v)
            {
                v=cap[i];
                ans=i;


            }
        }
        
    return ans;}
};