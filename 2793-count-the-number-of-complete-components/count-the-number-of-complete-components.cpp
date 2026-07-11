class Solution {
public:
void dfs(int src,unordered_set<int>&vis,vector<vector<int>>& ad,int &p,int &q){
      if (src >= ad.size()) return;
    vis.insert(src);
    p++;
    for(auto ele:ad[src]){
        q++;
       if(vis.find(ele)==vis.end()){
            dfs(ele,vis,ad,p,q);
        }
    }
}
int connectedcomponents(int n,vector<vector<int>>& edges){
    vector<vector<int>>ad(n);


for(auto &e:edges){
    ad[e[0]].push_back(e[1]);
    ad[e[1]].push_back(e[0]);
}

    unordered_set<int>vis;
    int ans=0;
    for(int i=0;i<n;i++){
        if(vis.find(i)==vis.end())
        {
            int p=0;
            int q=0;
            dfs(i,vis,ad,p,q);
            q=q/2;
            if(q==(p*(p-1))/2)ans++;

        }
    }
    return ans;
}
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
       return connectedcomponents(n,edges);
    }
};