class Solution {
public:
    int maxIceCream(vector<int>& costs, int c) {
        sort(costs.begin(), costs.end());
        int ans = 0;
        for (auto x : costs) {
            if (c < x)
                break;
            c -= x;
            ans++;
        }
        return ans;
    }
};