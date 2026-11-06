class Solution {
public:
    string maxValue(string n, int x) {
        string ans = "";
        char c = x + '0';
        if (n[0] == '-') {
            ans += '-';
            for (int i = 1; i < n.size(); i++) {
                if (c != ' ' && n[i] > c) {
                    ans += c;
                    c = ' ';
                }
                ans += n[i];
            }
            if (c != ' ') {
                ans += c;
            }
        } else {
            for (int i = 0; i < n.size(); i++) {
                if (c != ' ' && n[i] < c) {
                    ans += c;
                    c = ' ';
                }
                ans += n[i];
            }

            if (c != ' ') {
                ans += c;
            }
        }
        return ans;
    }
    //temp
};