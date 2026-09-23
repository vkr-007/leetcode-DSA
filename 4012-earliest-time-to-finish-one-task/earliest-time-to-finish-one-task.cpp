class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for (auto x : tasks) {ans = min(ans, x[0] + x[1]);}
        return ans;
    }
    // still cant tell why code is not fast enough
};