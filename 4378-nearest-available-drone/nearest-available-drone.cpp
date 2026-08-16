class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& tar) {
        
        int ans=-1;
        int a1=INT_MAX;
        int h=0;

        for(auto ele:drones)
        {
            int a=ele[0];
            int b=ele[1];
            int c=ele[2];
            
            int k=abs(a-tar[0])+abs(b-tar[1]);

            if(k<a1&&k<=c)
            {
                ans=h;
                a1=k;
            }
            h++;
        }


   return ans; }
};