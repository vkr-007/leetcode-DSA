class Solution {
public:
    long long numberOfWays(string s) {
        long long zero = 0, one = 0;
        long long zeroOne = 0, oneZero = 0;
        long long ans = 0;

        for(char c : s) {
            if(c == '0') {
                ans += zeroOne;     // 01 + 0 = 010
                oneZero += one;     // 1 + 0 = 10
                zero++;
            }
            else {
                ans += oneZero;     // 10 + 1 = 101
                zeroOne += zero;    // 0 + 1 = 01
                one++;
            }
        }

        return ans;
    }
};