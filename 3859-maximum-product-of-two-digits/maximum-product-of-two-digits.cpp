class Solution {
public:
    int maxProduct(int n) {
    vector<int>v;
    int r=0;
    while(n>0)
    {
        r=n%10;
        v.push_back(r);
        n=n/10;
    }
    sort(v.begin(),v.end(),greater<int>());
    return v[1]*v[0];
    }
};