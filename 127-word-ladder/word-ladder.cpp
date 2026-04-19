class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& word) 
    {
        unordered_map<string,int>mp;

        for(auto ele:word)
        {
            mp[ele]++;
        }

        if(mp.find(end)==mp.end())return 0;
        int ans=1;

        queue<string>q;
        q.push(begin);
        while(q.size()>0)
        {
            int r=q.size();
            while(r--)
            {
            auto ele=q.front();
            q.pop();
            if(ele==end)return ans;

            for(int i=0;i<ele.size();i++)
            {
                string temp=ele;
                for(int j=0;j<26;j++)
                {
                    temp[i]=char(j+'a');
                    if(temp==ele)continue;

                    if(mp.find(temp)!=mp.end())
                    {
                        q.push(temp);
                        mp.erase(temp);
                    }
                    
                }
            }
            }
        ans++;
        }
        
   return 0; }
};