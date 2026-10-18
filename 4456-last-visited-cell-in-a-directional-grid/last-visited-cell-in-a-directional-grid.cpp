class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        
        int a=0;
        int b=0;
        int m=grid.size();
        int n=grid[0].size();


        set<pair<int,int>>st;
        st.insert({0,0});


           while(1)
           {
                char ch=grid[a][b];
                int x=a;
                int y=b;
                if(ch=='R')y++;
                else if(ch=='U')x--;
                else if (ch=='L')y--;
                else x++;
                
                  
                   
                
                 if(x<0||y<0||x>=m||y>=n)break;
                 if(st.find({x,y})!=st.end()) break;
                 
                    
                
                a=x;
                b=y;
                st.insert({a,b});

            }
        
  return {a,b} ; }
};