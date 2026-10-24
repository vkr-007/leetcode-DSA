class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,string arriveBob, string leaveBob) {
        vector<int> day = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto calc = [&](string s) {
            int m = stoi(s.substr(0, 2));
            int d = stoi(s.substr(3, 2));
            for (int i = 0; i < m - 1; i++) {
                d += day[i];
            }
            return d;
        };
        int a=calc(arriveAlice);
        int b=calc(leaveAlice);//l1
        int c=calc(arriveBob);
        int d=calc(leaveBob);//l2
        return max(0,min(b, d) - max(a, c) + 1);
    }
};