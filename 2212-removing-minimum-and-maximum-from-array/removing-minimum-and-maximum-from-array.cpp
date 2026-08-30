class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int b = *max_element(nums.begin(), nums.end());
        int s = *min_element(nums.begin(), nums.end());
        bool foundb = false;
        bool founds = false;
        int start = 0;
        for (int x : nums) {
            start++;
            if (x == b)
                foundb = true;
            if (x == s)
                founds = true;

            if (foundb && founds) {
                foundb = false;
                founds = false;

                break;
            }
        }
        int back = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == b)
                foundb = true;
            if (nums[i] == s)
                founds = true;
            back++;
            if (foundb && founds) {
                foundb = false;
                founds = false;

                break;
            }
        }
        start = min(start, back);
        int temp = 0;
        for (auto x : nums) {
            temp++;
            if (x == b || x == s) {
                break;
            }
        }
        int j = nums.size() - 1;
        while (j >= 0) {
            temp++;
            if (nums[j] == b || nums[j] == s) {
                break;
            }
            j--;
        }
        return min(start, temp);
        //te
    }
};