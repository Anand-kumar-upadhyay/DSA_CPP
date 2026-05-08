class Solution {
public:
    string sortString(string s) {
        

        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        string result="";

        while(result.size()<s.size()){

            for(char c='a';c<='z';c++){
                
                if(freq[c]>0){
                    result+=c;
                    freq[c]--;
                }
            }


            for(char c='z';c>='a';c--){
                if(freq[c]>0){
                    result+=c;
                    freq[c]--;
                }
            }
        }

        return result;
    }
};