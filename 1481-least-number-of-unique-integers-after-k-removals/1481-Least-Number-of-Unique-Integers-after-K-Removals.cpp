class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (auto x : arr) {
            mp[x]++;
        }
        vector<int> v;
        for (auto it : mp) {
            v.push_back(it.second);
        }

        sort(v.begin(), v.end());
        int ans = v.size();
        for (int i = 0; i < v.size(); i++) {
            if (k >= v[i]) {
                k -= v[i];
                ans--;
            } else
                break;
        }
        return ans;
    }
};