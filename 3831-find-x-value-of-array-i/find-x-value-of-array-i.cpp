class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> result(k, 0);
        vector<long long> prevcount(k, 0);
        for (int i = 0; i < n; i++) {
            vector<long long> currcount(k, 0);
            int curr_er = nums[i] % k;
            currcount[curr_er]++;
            for (int old_r = 0; old_r < k; old_r++) {
                int new_r = ((long long)old_r * nums[i] % k) % k;
                currcount[new_r] += prevcount[old_r];
            }
            prevcount =move(currcount);
            for (int x = 0; x < k; x++) {
                result[x] += prevcount[x];
            }
        }
        return result;
    }
};