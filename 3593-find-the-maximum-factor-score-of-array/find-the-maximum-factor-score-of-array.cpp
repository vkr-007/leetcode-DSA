class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            long long t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
    long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }
    long long maxScore(vector<int>& nums) {

        int n = nums.size();
        if (n == 1) {
            return nums[0]*nums[0];
        }
        vector<long long> pg(n), pl(n);
        vector<long long> sg(n), sl(n);
        // begin to end
        pg[0] = nums[0];
        pl[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pg[i] = gcd(pg[i - 1], nums[i]);
            pl[i] = lcm(pl[i - 1], nums[i]);
        }
        // end to begin
        sg[n - 1] = nums[n - 1];
        sl[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sg[i] = gcd(sg[i + 1], nums[i]);
            sl[i] = lcm(sl[i + 1], nums[i]);
        }

        // without removing
        long long ans = pg[n - 1] * pl[n - 1];
        // with removeing
        for (int i = 0; i < n; i++) {
            long long cg, cl;
            if (i == 0) {
                cg = sg[1];
                cl = sl[1];
            } else if (i == n - 1) {
                cg = pg[n - 2];
                cl = pl[n - 2];
            } else {
                cg = gcd(pg[i - 1], sg[i + 1]);
                cl = lcm(pl[i - 1], sl[i + 1]);
            }
            ans = max(ans, cg * cl);
        }
        return ans;
    }
};