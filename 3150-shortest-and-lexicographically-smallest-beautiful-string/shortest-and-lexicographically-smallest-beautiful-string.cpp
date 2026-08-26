class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0;
        int ones = 0;

        int len = INT_MAX;
        int st = 0;
        for (int r = 0; r < s.size(); r++) {
            if (s[r] - '0' == 1) {
                ones++;
            }
            while (ones == k) {
                int temp = r - l + 1;
                if (temp < len||(temp == len && s.substr(l, temp) < s.substr(st, len))) {
                    len = temp;
                    st = l;
                }
                if (s[l] - '0' == 1) {
                    ones--;
                }
                l++;
            }
        }
        return len != INT_MAX ? s.substr(st, len) : "";
    }
};