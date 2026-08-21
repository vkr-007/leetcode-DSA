class Solution {
public:
    bool possible(vector<int>& v, int days, int m, int k) {
        int flower = 0;
        int bouqets = 0;
        for (auto x : v) {
            if (x <= days) {
                flower++;
                if (flower == k) {
                    bouqets++;
                    flower = 0;
                }
            } else {
                flower = 0;
            }
        }
        return bouqets >= m;
    }
    //possible checks if no of days is sufficentt or not
    int minDays(vector<int>& v, int m, int k) {
        if ((long long)m * k > v.size())
            return -1;
        int lo = *min_element(v.begin(), v.end());
        int hi = *max_element(v.begin(), v.end());

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (possible(v, mid, m, k)) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return lo;
    }
};