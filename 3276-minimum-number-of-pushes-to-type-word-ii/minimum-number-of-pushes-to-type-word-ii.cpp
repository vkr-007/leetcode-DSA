class Solution {
public:
    int minimumPushes(string word) {
        vector<int> f(26, 0);
        for (auto x : word) {
            f[x - 'a']++;
        }
        sort(f.rbegin(), f.rend());
        int ans = 0;
        int i = 0;
        for (auto x : f) {
            if (x == 0)
                break;
            ans += ((i / 8) + 1) * x;
            i++;
        }
        return ans;
    }
};