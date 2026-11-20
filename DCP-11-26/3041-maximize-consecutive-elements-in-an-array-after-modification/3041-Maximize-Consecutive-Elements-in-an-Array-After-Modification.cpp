class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        map<int, int> dp;
        int ans = 0;

        for(int x : nums) {
            int a = dp[x-1];
            int b = dp[x];

            dp[x] = max(dp[x], a+1);
            dp[x+1] = max(dp[x+1], b+1);

            ans = max(ans, max(dp[x], dp[x+1]));
        }

        return ans;
    }
};