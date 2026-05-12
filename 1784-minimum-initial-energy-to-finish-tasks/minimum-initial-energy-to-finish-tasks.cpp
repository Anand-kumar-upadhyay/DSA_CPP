class Solution {
public:
static bool custom(vector<int>&a,vector<int>&b)
{
    return abs(a[1]-a[0])>abs(b[1]-b[0]);
}
    int minimumEffort(vector<vector<int>>& tasks) {
        
        int n=tasks.size();

        int ans=0;
        int act =0;
        sort(tasks.begin(),tasks.end(),custom);

        /*
        for(auto ele:tasks)
        {
            cout<<ele[0]<<" "<<ele[1];
            cout<<endl;
        }
        */

        for(int i=0;i<n;i++)
        {
            int a=tasks[i][0];
            int b=tasks[i][1];

            if(act<b)
            {
                int h=b-act;
                act+=h;
                ans+=h;
                act-=a;      
            }
           

            else 
            {
            act-=a;
            }
        }





    return ans;}
};