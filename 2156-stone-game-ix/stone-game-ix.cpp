class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {

        int n=stones.size();

        vector<int>v(3,0);

        for(auto ele:stones)
        {
            int g=ele%3;
            v[g]++;
        }

        if(v[0]%2==0)return min(v[1],v[2])>0;
        else return abs(v[1]-v[2])>2;


        
        
    }
};