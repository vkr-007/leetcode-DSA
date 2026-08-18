class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_map<int, int> f;
        for (auto x : nums) {
            f[x]++;
        }
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        } else if (k > 1 && n > k) {

            if (f[nums[0]] == 1 && f[nums[n-1]] == 1) {
                return max(nums[0], nums[n-1]);
            } else if (f[nums[0]] > 1 && f[nums[n-1]] == 1) {
                return nums[n-1];
            } else if (f[nums[0]] == 1 && f[nums[n-1]] > 1) {
                return nums[0];
            }
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