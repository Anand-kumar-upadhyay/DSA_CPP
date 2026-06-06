class Solution {
public:
    long long maxTotal(vector<int>& nums, string s) {
        int n=nums.size();
        long long ans=0;
        priority_queue<int>pq;
        int a=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                a++;
                pq.push(nums[i]);
            }
            else
            {
                while(a)
                {
                    ans+=pq.top();
                    pq.pop();
                    a--;
                }
                while(pq.size()>0)pq.pop();
                pq.push(nums[i]);
            }
        }
        while(a)
                {
                    ans+=pq.top();
                    pq.pop();
                    a--;
                }



    return ans;}
};