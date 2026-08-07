class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& stu) {
        int n=seats.size();

        int ans=0;
        sort(seats.begin(),seats.end());
        sort(stu.begin(),stu.end());

        for(int i=0;i<n;i++)
        {
            ans+=abs(seats[i]-stu[i]);
        }


        return ans;
    }
};