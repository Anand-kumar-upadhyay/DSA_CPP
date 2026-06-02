class Solution {
public:
    
    int earliestFinishTime(vector<int>& ls, vector<int>& le, vector<int>& ws, vector<int>& we) {
         int ans = INT_MAX;
    for (int i = 0; i < ls.size(); i++) {
        for (int j = 0; j < ws.size(); j++) {
           
            int t1 = max(ls[i], 0) + le[i];
            
            if (ws[j] <= t1) t1 += we[j];
                
             else t1 += (ws[j] - t1) + we[j];
        ans = min(ans, t1);
            
            
            int t2 = max(ws[j], 0) + we[j];
            
            if (ls[i] <= t2) t2 += le[i];
                
             else t2 += (ls[i] - t2) + le[i];
        ans = min(ans, t2);
        }
    }
    return ans;
 }
};