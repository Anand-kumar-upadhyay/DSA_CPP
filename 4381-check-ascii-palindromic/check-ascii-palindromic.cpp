class Solution {
public:

    string ret (char g ) {
        int u = toascii(g);
          string h= "";
           while(u > 0 ){
            int rem = u%2;
            u = u/2;
            h+=to_string(rem);
           }
       
        while(h.size() < 8){
            h.push_back('0');
        }
        reverse(h.begin(),h.end());

        
        return h;
    
        }

    bool isPalindromic(string s) {


         string k = "";
        for(int i = 0 ; i < s.size() ; i++){
            k+=ret(s[i]);
        }
        string y = k ;
        reverse (y.begin() , y.end());
        
        return (y==k);
        
    }
};