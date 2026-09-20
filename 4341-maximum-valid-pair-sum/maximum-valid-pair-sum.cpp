class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
         int n=nums.size();
        int mxi=nums[0];
        int ans=0;
      for (int i = k; i < n; i++) {
            mxi = max(mxi, nums[i - k]);
            ans = max(ans, nums[i] + mxi);
        }
        return ans;
    }
};