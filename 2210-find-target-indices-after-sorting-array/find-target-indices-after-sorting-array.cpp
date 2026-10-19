class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int s = 0, e = 0;

        for(int x : nums) {
            if(x < target) s++;
            if(x == target) e++;
        }

        vector<int> ans;
        for(int i = s; i < s + e; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};