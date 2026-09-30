class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;

        for(int x : nums)
            mp[x]++;

        for(auto x : mp) {
            if(x.second == 2)
                ans ^= x.first;
        }

        return ans;
    }
};