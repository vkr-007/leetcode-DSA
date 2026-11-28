
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        vector<int> freq(n + 1, 0);

        int mn = INT_MAX;

        for(auto &x : items) {
            freq[x[0]]++;
            mn = min(mn, x[1]);
        }

        // Count factors that divide each item's factor
        for(int i = 1; i <= n; i++) {
            for(int j = 2 * i; j <= n; j += i) {
                freq[i] += freq[j];
            }
        }

        vector<pair<int, int>> v;

        for(auto &x : items) {
            int factor = x[0];
            int price = x[1];
            int gain = freq[factor] - 1;

            if(gain > 0 && 1LL * price < 2LL * mn) {
                v.push_back({price, gain});
            }
        }

        sort(v.begin(), v.end());

        long long ans = 0;
        long long rem = budget;

        for(auto &x : v) {
            long long price = x.first;
            long long gain = x.second;

            long long take = min(gain, rem / price);

            ans += 2 * take;
            rem -= take * price;
        }

        ans += rem / mn;

        return (int)ans;
    }
};
