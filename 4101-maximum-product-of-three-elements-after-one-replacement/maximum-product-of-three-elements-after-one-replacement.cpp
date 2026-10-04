class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long f= 0;
        long long s= 0;

        for (int i = 0; i < n; ++i) {
            if (abs(nums[i]) > abs(f)) {
                s = f;
                f = nums[i];
            } else if (abs(nums[i]) > abs(s)) {
                s = nums[i];
            }
        }
        return 1LL * 100000 * abs(f) * abs(s);
    }
};