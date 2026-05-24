class Solution {
public:
    int passwordStrength(string pass) {
        
        int n=pass.size();
        int ans=0;
        unordered_map<char,int>mp;

        for(int i=0;i<n;i++)
        {
            if(pass[i]>='a'&&pass[i]<='z'&&mp.find(pass[i])==mp.end())
            {ans+=1;
            mp[pass[i]]++;
            }
            else if(pass[i]>='A'&&pass[i]<='Z'&&mp.find(pass[i])==mp.end())
            {ans+=2;
            mp[pass[i]]++;
            }
            else if(pass[i]>='0'&&pass[i]<='9'&&mp.find(pass[i])==mp.end())
            {ans+=3;
            mp[pass[i]]++;
            }
            else 
            {
                if(mp.find(pass[i])==mp.end())
                {
                    ans+=5;
                    mp[pass[i]]++;
                }
            }
            








        }
   return ans; }
};