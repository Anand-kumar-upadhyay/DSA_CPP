class Solution {
public:
typedef pair<int,int>p;
    int smallestChair(vector<vector<int>>& times, int target) {
    int n=times.size();
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        
        v.push_back({times[i][0],times[i][1],i});
    }
    sort(v.begin(),v.end());
    priority_queue<p,vector<p>,greater<p>>pq;
    vector<int>ans(n,0);
    int r=-1;
    priority_queue<int,vector<int>,greater<int>>pq1;

 
    for(int i=0;i<n;i++)
    {
        int a=v[i][0];
        int b=v[i][1];
        int c=v[i][2];
        while(pq.size()>0 && pq.top().first<=a)
        {
            int g=pq.top().second;
           pq1.push(g);
            pq.pop();
 
        }
        if(pq1.size()>0)
        {
            int y=pq1.top();
            ans[c]=y;
            pq1.pop();
            if(ans[target]!=0)return ans[target];
            pq.push({b,y});
        }
        else
        {
            r++;
            ans[c]=r;
            if(ans[target]!=0)return ans[target];
            pq.push({b,r});
            
        }
    }
    return ans[target];

    }
};