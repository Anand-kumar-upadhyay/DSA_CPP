class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& in) {

        int n=in.size();

        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if( max(in[i][0],in[j][0]) <=min(in[j][1],in[i][1]))ans++;
                
            }
        }




        return ans;
        

    }
};