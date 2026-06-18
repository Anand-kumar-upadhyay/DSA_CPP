class Solution {
public:
    double angleClock(int hour, int min) {
        
        double a1=6.0*min;

        double ans=(30.0*hour)+0.5*(min);
        double w=abs(ans-a1);

        return std::min(w,360.0-w);
       
    }
};