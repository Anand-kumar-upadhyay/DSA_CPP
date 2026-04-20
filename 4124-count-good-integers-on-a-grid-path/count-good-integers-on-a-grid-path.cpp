class Solution {
public:
long long dp[17][2][10];

long long func(string &l,vector<bool>&v,int i,bool tight,int prev)
{


if(i==l.size())return 1;
if(dp[i][tight][prev]!=-1)return dp[i][tight][prev];

long long h=(tight==1)?l[i]-'0':9;
long long res=0;

for(int dig=0;dig<=h;dig++)
{
    if(v[i]&&prev>dig)continue;

    if(v[i])res+=func(l,v,i+1,(tight&&(dig==h)),dig);
    else res+=func(l,v,i+1,(tight&&(dig==h)),prev);
}
return dp[i][tight][prev]=res;


}
    long long countGoodIntegersOnPath(long long l, long long r, string dir) {

        string s=to_string(r);;
        while(s.size()<16)s='0'+s;
     
        string t=to_string(l-1);
        while(t.size()<16)t='0'+t;

        vector<bool>v(16,0);
        int x=0;
        v[0]=1;
        for(auto ele:dir)
        {
            if(ele=='D')x+=4;
            else x++;
            v[x]=1;

        }
        memset(dp,-1,sizeof(dp));
        long long a=func(s,v,0,1,0);

        memset(dp,-1,sizeof(dp));
        long long b=func(t,v,0,1,0);






        
    return a-b;}
};