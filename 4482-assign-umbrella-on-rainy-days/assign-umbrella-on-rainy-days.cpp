class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        
    int n=rain.size();
    vector<string>ans(n);
    int a=0;
    int b=0;



    for(int i=0;i<n;i++)
    {
        if(rain[i]==0)ans[i]="None";

        else if(i+1<n && rain[i]==rain[i+1]&&rain[i]==1)
        {
            if(a<=b)
            {
                ans[i]="Alice";
                a++;
            }
            else
            {
                ans[i]="Bob";
                b++;

            }
        }
        else
        {
            ans[i]="Bob";
            b++;

            
        }
        


    }
    
    
    
    
    return ans;}
};