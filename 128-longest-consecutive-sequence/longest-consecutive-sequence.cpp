class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        int ans = 1;
        int temp = 1;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1] - 1) {
                temp++;
            }
            else if(nums[i] == nums[i + 1]) {
                continue;
            }
            else {
                temp = 1;
            }

            ans = max(ans, temp);
        }

        return ans;
    }
};