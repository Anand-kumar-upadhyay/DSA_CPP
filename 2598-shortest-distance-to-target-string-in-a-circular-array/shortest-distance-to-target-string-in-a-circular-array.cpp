class Solution {
public:
    int closestTarget(vector<string>& words, string tar, int start) {
        int n=words.size();
        int ans=INT_MAX;
        

        for(int i=0;i<n;i++)
        {
            if(words[i]==tar)
            {
            ans=min(ans,abs(i-start));
            ans=min(ans,n-abs(i-start));
            }

        }
        if(ans==INT_MAX)return -1;

  return ans;  }
};