class Solution {
public:
    int totalWaviness(int num1, int num2)
    {
        
        int ans=0;
        for(int i=num1;i<=num2;i++)
        {
            vector<int>v;
            int k=i;
            while(k>0)
                {
                    v.push_back(k%10);
                    k=k/10;
                }
            reverse(v.begin(),v.end());
            for(int j=1;j<v.size()-1;j++)
            {
                if(v[j]<v[j-1]&&v[j]<v[j+1]||v[j]>v[j-1]&&v[j]>v[j+1])ans++;
                    
            }
                
            
        }
        
        
   return ans; }
};