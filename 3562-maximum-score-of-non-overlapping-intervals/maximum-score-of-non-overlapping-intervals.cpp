#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& interval) {
        int n = interval.size();

        for (int i = 0; i < n; i++) {
            interval[i].push_back(i);
        }

        sort(interval.begin(), interval.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        vector<vector<long long>> dp(n, vector<long long>(5, 0));
        vector<vector<vector<int>>> res(n, vector<vector<int>>(5));

        for (int i = 0; i < n; i++) {
            int s = interval[i][0];
            int sc = interval[i][2];
            int index = interval[i][3];

            int left = 0;
            int right = i - 1;
            int last = -1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (interval[mid][1] < s) {
                    last = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            for (int k = 1; k <= 4; k++) {
                if (i == 0) {
                    dp[i][k] = 0;
                    res[i][k] = {};
                } else {
                    dp[i][k] = dp[i - 1][k];
                    res[i][k] = res[i - 1][k];
                }

                long long take = sc;
                vector<int> temp = {index};

                if (last != -1) {
                    take += dp[last][k - 1];
                    temp.insert(temp.end(), res[last][k - 1].begin(), res[last][k - 1].end());
                }

                sort(temp.begin(), temp.end());

                if (take > dp[i][k] ||
                    (take == dp[i][k] && (res[i][k].empty() || temp < res[i][k]))) {
                    dp[i][k] = take;
                    res[i][k] = move(temp);
                }
            }
        }

        return res[n - 1][4];
    }
};