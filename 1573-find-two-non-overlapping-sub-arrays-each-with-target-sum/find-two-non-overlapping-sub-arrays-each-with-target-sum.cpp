class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int INF = 1e9;

        vector<int> dp(n, INF);

        int sum = 0;
        int left = 0;
        int ans = INF;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            while (sum > target) {
                sum -= arr[left++];
            }

            if (sum == target) {
                int len = i - left + 1;

                if (left > 0 && dp[left - 1] != INF) {
                    ans = min(ans, len + dp[left - 1]);
                }

                if (i == 0)
                    dp[i] = len;
                else
                    dp[i] = min(dp[i - 1], len);
            }
            else if (i > 0) {
                dp[i] = dp[i - 1];
            }
        }

        return ans == INF ? -1 : ans;
    }
};