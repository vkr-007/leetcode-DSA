class Solution {
public:
    int minDays(vector<int>& v, int m, int k) {

        if((long long)m * k > v.size())
            return -1;

        int lo = *min_element(v.begin(), v.end());
        int hi = *max_element(v.begin(), v.end());

        while(lo <= hi) {

            int mid = lo + (hi - lo) / 2;

            int cnt = 0;
            int b = 0;

            for(auto x : v) {

                if(x <= mid) {
                    cnt++;

                    if(cnt == k) {
                        b++;
                        cnt = 0;

                        if(b == m)
                            break;
                    }
                }
                else {
                    cnt = 0;
                }
            }

            if(b >= m)
                hi = mid - 1;
            else
                lo = mid + 1;
        }

        return lo;
    }
};