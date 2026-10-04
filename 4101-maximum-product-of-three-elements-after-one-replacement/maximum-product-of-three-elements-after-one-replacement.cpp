class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long f = 0, s = 0;

        for (int x : nums) {
            if (abs(x) > abs(f)) {
                s = f;
                f = x;
            } else if (abs(x) > abs(s)) {
                s = x;
            }
        }

        return 1LL * 100000 * abs(f) * abs(s);
    }
};