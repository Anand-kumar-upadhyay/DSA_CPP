class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();

        unordered_map<char,int>mp;
        for(auto ele:s)
        {
            mp[ele]++;
        }

        string s1="";
        string m="";
        sort(s.begin(),s.end());

        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]%2==0)
                {
                    int k=mp[s[i]]/2;
                    while(k--)

                    {
                        s1+=s[i];
                        mp[s[i]]--;
                    }
                }
                else
                {
                    int z=mp[s[i]]/2;
                    

                    while(z--)

                    {
                    s1+=s[i];
                
                    }
                   
                   
                     m+=s[i];
                       
                    


                }
                mp.erase(s[i]);

            }
        }

        string  ans=s1+m;
        reverse(s1.begin(),s1.end());
        ans+=s1;


         return ans;}
};