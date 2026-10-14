class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum < 1 || sum > 9 * num) {
            return "";
        }
        int nine = sum / 9;
        int rem = sum % 9;
        string ans = "";
        while (nine--) {
            ans += '9';
            num--;
        }
        if (rem > 0) {
            ans.push_back(rem + '0');
            num--;
        }
        while (num--) {
            ans += '0';
        }
        return ans;
    }
};