class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int ans = 0;//sliding windows
        for (int i = k; i < nums.size(); i++) {
            if (sum / k >= threshold) {
                ans++;
            }

            sum += nums[i] - nums[i - k];
        }
        if (sum / k >= threshold)
            ans++;

        return ans;
    }
};