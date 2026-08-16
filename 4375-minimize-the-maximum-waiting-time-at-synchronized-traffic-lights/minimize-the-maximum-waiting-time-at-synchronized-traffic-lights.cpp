class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& at) {
        
        int m1=-1;

        for(auto ele:lights)
        {
            m1=max(m1,ele);
        }

        int ans=0;

        for(int i=0;i<at.size();i++)
        {
            int k=at[i]%period;

            if(k>=m1)
            {
                ans=max(ans,period-k);


            }
        }


    return ans;}
};