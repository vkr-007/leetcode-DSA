class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = 0;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[mn]) {
                mn = i;
            }
            if (nums[i] > nums[mx]) {
                mx = i;
            }
        }
        int front = min(mx, mn);
        int back = max(mx, mn);

        int left = back + 1;
        int right = n - front;
        int both = (front + 1) + (n - back);
        return min(left, min(right, both));
    }
};