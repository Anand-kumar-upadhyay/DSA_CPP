class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int ans=0;

        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i])&&mp.find(word[i])==mp.end())mp[word[i]]++;

        }
        for(int i=0;i<n;i++)
        {
            if(islower(word[i])&&mp.find(toupper(word[i]))!=mp.end())
            {mp.erase(toupper(word[i]));
            ans++;
            }

        }


        return ans;
    }
};