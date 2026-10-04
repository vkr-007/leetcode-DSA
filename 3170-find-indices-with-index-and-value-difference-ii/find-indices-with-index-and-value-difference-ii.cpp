class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        int n = nums.size();
        int mn = 0, mx = 0;

        for (int j = id; j < n; j++) {
            int i = j - id;

            if (nums[i] < nums[mn])
                mn = i;

            if (nums[i] > nums[mx])
                mx = i;

            if (nums[j] - nums[mn] >= vd)
                return {mn, j};//current- min

            if (nums[mx] - nums[j] >= vd)
                return {mx, j};//max-curr
        }

        return {-1, -1};
    }
};