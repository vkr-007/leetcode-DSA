class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
    sort(nums.rbegin(), nums.rend());

    vector<int> result;
    int prev = INT_MAX;

    for (int num : nums) {
        if (k == 0) break;

        if (num < prev) {
            result.push_back(num);
            prev = num;
            k--;
        }
    }

    return result;

    }
};