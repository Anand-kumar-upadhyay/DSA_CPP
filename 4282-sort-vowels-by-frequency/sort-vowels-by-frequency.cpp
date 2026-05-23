class Solution {
public:

static bool custom(vector<int>&a,vector<int>&b)
{
    if(a[0]==b[0])return a[1]>b[1];
    else return a[0]>b[0];
}
    string sortVowels(string s) {
        
        int n=s.size();
        string ans="";
        vector<int>v(26,-1);
        unordered_map<char,int>mp;

        for(auto ele:s)
        {
            if(ele=='a'||ele=='e'||ele=='i'||ele=='o'||ele=='u')
            {
            mp[ele]++;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
            int g=s[i]-'a';
            if(v[g]==-1)v[g]=i;
            }
        }



        vector<vector<int>>v1;

        for(auto ele:mp)
        {
            int val=ele.second;
            char c=ele.first;
            int h=-v[c-'a'];
            v1.push_back({val,h,c});

        }

        
        sort(v1.begin(),v1.end(),custom);
        /*
        for(auto ele:v1)
        {
            for(auto e:ele)
            {
                cout<<e<<" ";
            }
        }*/
        int k=0;

        for(int i=0;i<n;i++)
        {
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
             {
                if(v1[k][0]==0)k++;
                ans+=char(v1[k][2]);
                v1[k][0]--;

             }
             else ans+=s[i];

        }




    return ans;}
};