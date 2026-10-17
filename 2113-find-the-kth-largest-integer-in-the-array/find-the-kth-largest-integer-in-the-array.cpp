class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size();
        auto lamda = [](const string& a, const string& b) {
            if (a.size() != b.size())
                return a.size() < b.size();
            return a < b;
        };
        nth_element(nums.begin(), nums.begin() + n - k, nums.end(), lamda);

        return nums[n - k];
    }
};