class Solution {
public:
    int sum_d(int x) {
        int ans = 0;
        while (x > 0) {
            ans += x % 10;
            x /= 10;
        }
        return ans;
    }

    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i == sum_d(nums[i]))
                return i;
        }
        return -1;
    }
};