class Solution {
public:
    bool checkDivisibility(int n) {
        int s = 0;
        int p = 1;
        int n1 = n;
        while (n > 0) {
            s += n % 10;
            p = p * (n % 10);
            n /= 10;
        }
        return (n1 % (s + p)) == 0;
    }
};