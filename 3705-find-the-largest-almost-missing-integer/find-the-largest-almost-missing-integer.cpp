class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> f;
        for (auto x : nums) {
            f[x]++;
        }
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        } else if (k > 1 && n > k) {
            int ans = -1;

            if (f[nums[0]] == 1)
                ans = max(ans, nums[0]);

            if (f[nums[n - 1]] == 1)
                ans = max(ans, nums[n - 1]);

            return ans;
        } else

        {
            int ans = -1;
            for (auto x : f) {
                if (x.second == 1) {
                    ans = max(ans, x.first);
                }
            }
            return ans;
        }
        return -1;
    }
};

//trial