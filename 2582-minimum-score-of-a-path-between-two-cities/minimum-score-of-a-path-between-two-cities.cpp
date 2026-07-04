class Solution {
public:
int find(int x,vector<long long>&parent)
  {
    if(parent[x]==x)return x;
    return find(parent[x],parent);
  }


  void un(int x ,int y,vector<long long>&parent,vector<long long>&size)
  {
    int a=find(x,parent);
    int b=find(y,parent);
    if(a==b)  return;

    if(size[a]<size[b])
    {
        parent[a]=b;
        size[b]+=size[a];
    }
    else
    {
        parent[b]=a;
        size[a]+=size[b];
    }

  }
    int minScore(int n, vector<vector<int>>& roads) {
    int g=roads.size();
    int ans=INT_MAX;
    int j=0;
    vector<long long>par(n+1,0);
    vector<long long>size(n+1,1);
    for(int i=1;i<=n;i++)par[i]=i;
    
    while(j<roads.size())
    {
        int a=roads[j][0];
        int b=roads[j][1];
       
        un(a,b,par,size);
          

        
        j++;
    }

    

    int root=find(1,par);
    j=0;

    while(j<roads.size())
    {
        int a=roads[j][0];
       
       if(find(a,par)==root)
       {
        ans=min(ans,roads[j][2]);
       }
          

        
        j++;
    }

   return ans; }
};