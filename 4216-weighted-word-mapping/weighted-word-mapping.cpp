class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) 
    {
        int n=words.size();
        string ans="";
        for(int i=0;i<n;i++)
            {
                int y=0;
                for(int j=0;j<words[i].size();j++)
                {
                    int k=words[i][j]-'a';
                    y+=weights[k];          
                }
                y=y%26;
                ans+=char(25-y+'a');
                
            }
        
    return ans;}
};