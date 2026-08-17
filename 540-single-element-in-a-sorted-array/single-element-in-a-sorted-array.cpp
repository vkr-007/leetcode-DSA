class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            // single element found
            if ((mid == 0 || nums[mid] != nums[mid - 1]) &&
                (mid == nums.size() - 1 || nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }

            if (mid > 0 && nums[mid] == nums[mid - 1]) {
                if ((mid - 1) % 2 == 0) {
                    lo = mid + 1;
                } else {
                    hi = mid - 2;
                }
            }
            else {
                if (mid % 2 == 0) {
                    lo = mid + 2;
                } else {
                    hi = mid - 1;
                }
            }
        }

        return -1;
    }
};