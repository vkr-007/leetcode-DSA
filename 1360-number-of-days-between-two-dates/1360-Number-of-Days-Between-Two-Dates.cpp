class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        auto days = [](string s) {
            int y = stoi(s.substr(0, 4));
            int m = stoi(s.substr(5, 2));
            int d = stoi(s.substr(8, 2));
            int ans = 0;
            for (int i = 1971; i < y; i++) {
                if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
                    ans += 366;

                } else {
                    ans += 365;
                }
            }
            int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
                month[1] = 29;
            }
            for (int i = 0; i < m - 1; i++)
                ans += month[i];

            ans += d;

            return ans;
        };
        return abs(days(date1)-days(date2));
    }
};