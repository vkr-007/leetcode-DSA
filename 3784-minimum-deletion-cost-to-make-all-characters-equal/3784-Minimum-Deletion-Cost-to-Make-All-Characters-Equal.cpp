class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int t = 0;
        int sum[26] = {};

        for (int i = 0; i < s.size(); i++) {
            t+= cost[i];
            sum[s[i] - 'a'] += cost[i];
        }

        int mx = 0;
        for (int i = 0; i < 26; i++) {
            mx = max(mx, sum[i]);
        }

        return t- mx;
    }
};