class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int m1 = INT_MAX, m2 = INT_MAX;
        int ma = INT_MIN, ma2 = INT_MIN, ma3 = INT_MIN;
        for (int x : nums) {
            if (x <= m1) {
                m2 = m1;
                m1 = x;
            } else if (x <= m2) {
                m2 = x;
            }
            if (x >= ma) {
                ma3 = ma2;
                ma2 = ma;
                ma = x;
            } else if (x >= ma2) {
                ma3 = ma2;
                ma2 = x;

            } else if (x >= ma3) {
                ma3 = x;
            }
        }
        return max(m1 * m2 * ma, ma * ma2 * ma3);
    }
};