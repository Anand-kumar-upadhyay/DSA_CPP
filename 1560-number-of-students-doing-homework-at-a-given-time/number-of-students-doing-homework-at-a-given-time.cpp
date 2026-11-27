class Solution {
public:
    int busyStudent(vector<int>& start, vector<int>& end, int qu) {

      int n=start.size();
      int ans=0;

      for(int i=0;i<n;i++)
      {

        if(start[i]<=qu && end[i]>=qu) ans++;

      }

   return ans; }

};