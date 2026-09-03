
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int m = nums1[0];
        bool odd = false;

        for (auto x : nums1) {
            if (x % 2 == 1)
                odd = true;

            if (x < m)
                m = x;
        }

        if (m % 2 != 0)
            return true;

        return !odd;
    }
};