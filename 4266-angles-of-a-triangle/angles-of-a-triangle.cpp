class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
    vector<double> ans;

    sort(sides.begin(),sides.end());

    double a=sides[0];
    double b=sides[1];
    double c=sides[2];

   
    if(a+b<=c)return ans;

    
    double A =acos((b*b+c*c-a*a)/(2*b*c))*180.0/M_PI;
    double B =acos((a*a+c*c-b*b)/(2*a*c))*180.0/M_PI;
    double C =acos((a*a+b*b-c*c)/(2*a*b))*180.0/M_PI;

    ans.push_back(A);
    ans.push_back(B);
    ans.push_back(C);


    sort(ans.begin(), ans.end());

    return ans; }
};