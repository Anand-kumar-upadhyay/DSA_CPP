class Solution {
public:
static bool custom(vector<int>a,vector<int>b)
{
if(a[1]==b[1])return a[0]>b[0];
return a[1]>b[1];
}
    vector<int> filterRestaurants(vector<vector<int>>& res, int ve, int ma, int md) {
        
        int n=res.size();
        vector<vector<int>>v;

        for(int i=0;i<n;i++)
        {

            if(ve==1)
            {
            if( ve==res[i][2] && res[i][3]<=ma  && res[i][4]<=md)
            {

                v.push_back({res[i][0],res[i][1]});
            }
            }
            else if(ve==0)
            {
              if(res[i][3]<=ma  && res[i][4]<=md)
            {
                v.push_back({res[i][0],res[i][1]});
                
            }
            }


        }

        sort(v.begin(),v.end(),custom);
        vector<int>ans;

        for(auto ele:v)
        {
            ans.push_back(ele[0]);
        }
   return ans; }
};