class Solution {
public:
    int minDays(vector<int>& v, int m, int k) {
        if ((long long)m * k > v.size())
            return -1;
        int lo = *min_element(v.begin(), v.end());
        int hi = *max_element(v.begin(), v.end());
        //using break to reduce time complexity
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int flower = 0;
            int bouquets = 0;

            for (auto x : v) {

                if (x <= mid) {
                    flower++;

                    if (flower == k) {
                        bouquets++;
                        flower = 0;
                         if(bouquets == m)
                break;
                    }
                } else {
                    flower = 0;
                }
            }


            if (bouquets >= m) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return lo;
    }
};