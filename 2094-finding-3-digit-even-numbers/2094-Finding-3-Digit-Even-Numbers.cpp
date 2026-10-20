class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int cnt[10] = {};
        for (auto x : digits) {
            cnt[x]++;
        }
        vector<int> ans;
        for (int i = 100; i <= 998; i += 2) {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;
            cnt[a]--;
            cnt[b]--;
            cnt[c]--;
            if (cnt[a] >= 0 && cnt[b] >= 0 && cnt[c] >= 0) {
                ans.push_back(i);
            }
            cnt[a]++;
            cnt[b]++;
            cnt[c]++;
        }
        return ans;
    }
};