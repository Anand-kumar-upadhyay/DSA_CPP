class Solution {
public:
    int secondsBetweenTimes(string start, string end) {
       string a=start.substr(0,2);
       string b=start.substr(3,2);
       string c=start.substr(6);
       string d=end.substr(0,2);
       string e=end.substr(3,2);
       string f=end.substr(6);
       int a1=0;
       int a2=0;
       a1=stoi(f)+stoi(e)*60+stoi(d)*3600;
       a2=stoi(c)+stoi(b)*60+stoi(a)*3600;
       return a1-a2;
       
    }
};