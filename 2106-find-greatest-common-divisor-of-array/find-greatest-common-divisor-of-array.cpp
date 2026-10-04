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
        int s = INT_MAX;
        int b = INT_MIN;

        for (int x : nums) {
            s = min(s, x);
            b = max(b, x);
        }

        return gcd(b, s);
    }
};