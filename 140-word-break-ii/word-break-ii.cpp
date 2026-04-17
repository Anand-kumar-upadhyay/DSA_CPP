class Solution {
public:
void func(string s,int j,unordered_set<string>&st,vector<string>&ans,string r)
{
    

    if(j==s.size())
    {
        ans.push_back(r);
        return;
    }
    string a="";
    for(int i=j;i<s.size();i++)
    {
        a+=s[i];
        
        if(st.find(a)!=st.end())
        {
            if(r.size()==0) func(s,i+1,st,ans,r+a);
            else func(s,i+1,st,ans,r+' '+a);
        }
    }
}
    vector<string> wordBreak(string s, vector<string>& word) 
    {
        int n=word.size();
        unordered_set<string>st;
        vector<string>ans;
        for(auto ele:word)st.insert(ele);
        func(s,0,st,ans,"");

    return ans;}
};