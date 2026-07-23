class Solution {
public:
bool canplace(int i,int j,int n,vector<string>s){
    
    for(int w=i-1;w>=0;w--){
        if(s[w][j]=='Q')return false;
    }

    for(int w=i-1,x=j-1;w>=0 && x>=0;w--,x--){
        if(s[w][x]=='Q')return false;
    }
      
   for(int w=i-1,x=j+1;w>=0 && x<n;w--,x++){
        if(s[w][x]=='Q')return false;
    }
    return true;
}
void func(int n,int i,vector<string>&a,vector<vector<string>>&ans){
    if(i==n){
        ans.push_back(a);
        return;
    }
    for(int j=0;j<n;j++){
        if(canplace(i,j,n,a)){
            a[i][j]='Q';
            func(n,i+1,a,ans);
            a[i][j]='.';
         }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        for(int i=0;i<n;i++){
         s+='.';
        }
        vector<vector<string>>ans;
        vector<string>a(n,s);
        func(n,0,a,ans);

        
    return ans;}
};