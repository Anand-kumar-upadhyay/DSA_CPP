class Solution {
public:
void rev(int i,int j,vector<int>&v)
{
    while(i<j)
    {
        int k=v[i];
        v[i]=v[j];
        v[j]=k;
        i++;
        j--;
    }
}
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m=grid.size();
        int n=grid[0].size();
        vector<int>v(m*n,0);
        int y=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[y++]=grid[i][j];
            }
        }
        k=k%v.size();
        rev(0,v.size()-1,v);
        rev(0,k-1,v);
        rev(k,v.size()-1,v);
      
        int z=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=v[z++];
            }
        }
        
    return grid;}
};