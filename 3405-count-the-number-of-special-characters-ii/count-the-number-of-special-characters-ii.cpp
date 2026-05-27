class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int ans=0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0;i<n;i++)
        {
           if(islower(word[i]))
           {
           mp1[word[i]]=i;
           }

        }
        for(int i=0;i<n;i++)
        {
           if(isupper(word[i])&&mp2.find(word[i])==mp2.end())
           {
           mp2[word[i]]=i;
           }

        }
        for(auto ele:mp1)
        {
        char c=ele.first-'a'+'A';
        int e=ele.second;
        if(mp2.find(c)!=mp2.end()&&mp2[c]>e)ans++;
        
        }








        return ans;
    }
};