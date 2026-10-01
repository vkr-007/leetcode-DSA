class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (auto x : words) {
            mp[x]++;
        }
        vector<pair<string,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            if (a.second != b.second)
                return a.second > b.second;

            return a.first < b.first;
        });
        vector<string> ans;
        for (auto x : v) {
            if (k == 0)
                break;
            ans.push_back(x.first);
            k--;
        }
        return ans;
    }
};