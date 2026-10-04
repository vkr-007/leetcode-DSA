class Solution {
public:
    int gcd(int a, int b) {
        while (b) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int m1 = INT_MAX;
        int m2 = INT_MIN;

        for (int x : nums) {
             m1 = min(m1, x);
            m2 = max(m2, x);
        }

        return gcd(m1, m2);
    }
};