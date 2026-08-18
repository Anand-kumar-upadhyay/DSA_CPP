class Solution {
public:
    int elevatorRequests(int n, vector<int>& re) {
        
        int m=re.size();


        int ans=re[0];

        for(int i=1;i<m;i++)
        {
            ans+=abs(re[i]-re[i-1]);


        }
  return ans;  }
};