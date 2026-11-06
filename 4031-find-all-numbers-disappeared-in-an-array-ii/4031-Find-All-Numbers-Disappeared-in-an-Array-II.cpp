class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        long long prev = (long long)lower - 1;

        for(int i = 0; i < nums.size(); i++) {
            long long curr = nums[i];

            if(curr < lower || curr > upper || curr <= prev)
                continue;

            if(curr - prev > 1) {
                ans.push_back({(int)(prev + 1), (int)(curr - 1)});
            }

            prev = curr;
        }

        if((long long)upper - prev > 0) {
            ans.push_back({(int)(prev + 1), upper});
        }

        return ans;
    }
};