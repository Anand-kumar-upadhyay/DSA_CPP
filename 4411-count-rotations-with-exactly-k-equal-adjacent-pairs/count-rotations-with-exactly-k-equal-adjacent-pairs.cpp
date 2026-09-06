class Solution {
public:
    int countRotations(string s, int k) {
        
        int ans = 0;
        int ast = 0;
        int n = s.length();
        for(int j=0;j<=n-1;j++){
            ast = 0;
             for(int i=0;i<n-1;i++){
                if(s[i] == s[i+1]){
                    ast++;
                }
            }
            if(ast == k){
                ans++;
            }
            string t = "";
            t += s.substr(1,n-1);
            t += s[0];
            s = t;
        }
        return ans;
    }
};