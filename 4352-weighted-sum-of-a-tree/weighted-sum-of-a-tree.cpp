class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
    
    int n=parent.size();
    vector<vector<int>>tree;
    tree.resize(n);

    for(int i=1;i<n;i++)
    {
        int k=parent[i];
        tree[k].push_back(i);

    }
    int h=1;
    int d=1;
    vector<int>v(n,0);
    v[0]=1;

    queue<int>q;
    q.push(0);

    while(q.size()>0)
    {
        int m=q.size();
        d++;
        h++;

        for(int i=0;i<m;i++)
        {
            auto ele=q.front();
            q.pop();
            for(auto e:tree[ele])
            {
                q.push(e);
                v[e]=d;
            }

        }
       
    }
    h--;
    
    long long ans=0;


    for(int i=0;i<n;i++)
    {
        ans+=1LL *nums[i]*(h-v[i]+1);
    }








   return ans; }
};