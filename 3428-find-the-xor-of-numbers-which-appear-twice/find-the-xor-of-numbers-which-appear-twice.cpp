class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int mp[51]={};
        int ans = 0;

        for (int x : nums) {
             mp[x]++;
            if (mp[x] == 2) {
                ans ^= x;
            }
        }

        return ans;
    }
};