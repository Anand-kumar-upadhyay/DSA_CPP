class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        queue<int>q;
        int n=arr.size();
        q.push(start);
        unordered_set<int>vis;

        while(q.size()>0)
        {
            auto ele=q.front();
            q.pop();
            if(arr[ele]==0)return true;

            if(ele+arr[ele]<n  &&vis.find(ele+arr[ele])==vis.end())
            {q.push(ele+arr[ele]);
            vis.insert(ele+arr[ele]);
            }
            if(ele-arr[ele]>=0  &&vis.find(ele-arr[ele])==vis.end())
            {
                q.push(ele-arr[ele]);
                vis.insert(ele-arr[ele]);

            }

        }







        return false;
    }
};