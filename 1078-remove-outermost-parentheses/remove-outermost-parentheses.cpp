class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int c = 0;
        for (auto x : s) {
            if (x == '(') {
                if (c > 0) {
                    ans += x;
                }
                c++;
            } else {
                c--;
                if (c > 0) {
                    ans += x;
                }
            }
        }
        return ans;
    }
};