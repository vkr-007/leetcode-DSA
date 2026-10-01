class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x : nums) {
            mp[x]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            if (a.second != b.second)
                return a.second < b.second;

            return a.first > b.first;
        });
        vector<int> ans;

        for (auto x : v) {
            while (x.second != 0) {
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};