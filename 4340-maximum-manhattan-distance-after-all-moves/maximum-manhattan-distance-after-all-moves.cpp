class Solution {
public:
    int maxDistance(string moves) {
        
        int n=moves.size();
        int x=0;
        int y=0;
        vector<vector<int>>dir={{0,1},{0,-1},{-1,0},{1,0}};
        int g=0;

        for(int i=0;i<n;i++)
        {
            if(moves[i]=='U')
            {
                x+=dir[0][0];
                y+=dir[0][1];
            }
            else if(moves[i]=='D')
            {
                x+=dir[1][0];
                y+=dir[1][1];

            }
           
           else if(moves[i]=='L')
            {
                x+=dir[2][0];
                y+=dir[2][1];

            }
            else if(moves[i]=='R')
            {
                x+=dir[3][0];
                y+=dir[3][1];

            }

            else
            {
                g++;
            }
        }
        int ans=abs(x);
        ans+=abs(y);
        ans+=g;
        
        return ans;

    }
};