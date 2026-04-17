class Solution {
public:


int arr[71][71][71];

int func(int r1,int c1,int c2,int m,int n,vector<vector<int>>& grid)
{
    
    if(r1==m ||c1>=n||c2>=n||c1<0||c2<0)return 0;
    
    if(arr[r1][c1][c2]!=-1)return arr[r1][c1][c2];
    int res=grid[r1][c1];
    
    if(c1!=c2)res+=grid[r1][c2];
    
    int a=func(r1+1,c1,c2,m,n,grid);
    int b=func(r1+1,c1,c2-1,m,n,grid);
    int c=func(r1+1,c1,c2+1,m,n,grid);
    int d=func(r1+1,c1-1,c2,m,n,grid);
    int e=func(r1+1,c1-1,c2-1,m,n,grid);
    int f=func(r1+1,c1-1,c2+1,m,n,grid);
    int g=func(r1+1,c1+1,c2,m,n,grid);
    int h=func(r1+1,c1+1,c2-1,m,n,grid);
    int i=func(r1+1,c1+1,c2+1,m,n,grid);
    
    res+=max({a,b,c,d,e,f,g,h,i});
    
    
    return arr[r1][c1][c2]=res;
    
    
    
}
    int cherryPickup(vector<vector<int>>& grid) 
    {
        int r=grid.size();
        int c=grid[0].size();
        memset(arr,-1,sizeof(arr));
        return func(0,0,c-1,r,c,grid);
        
    }
};