class Solution {
public:
    int minQueenMoves(vector<int>& so, vector<int>& tar) {
        if(so[0]==tar[0] && so[1]==tar[1])return 0;

        if(so[0]==tar[0]||so[1]==tar[1])return 1;
        if(abs(so[0]-tar[0])==abs(so[1]-tar[1]))return 1;
        else return 2;
    }
};