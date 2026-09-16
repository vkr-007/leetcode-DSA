class Solution {
public:
    long long power(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {
            if (b & 1)
                ans = ans * a % 1000000007;

            a = a * a % 1000000007;
            b /= 2;
        }

        return ans;
    }

    int numberOfSets(int n, int k) {
        long long mod = 1000000007;

        int a = n + k - 1;
        int b = 2 * k;

        long long num = 1;
        long long den = 1;

        for (int i = 1; i <= b; i++) {
            num = num * (a - b + i) % mod;
        }

        for (int i = 1; i <= b; i++) {
            den = den * i % mod;
        }

        long long inv = power(den, mod - 2);

        return num * inv % mod;
    }
};