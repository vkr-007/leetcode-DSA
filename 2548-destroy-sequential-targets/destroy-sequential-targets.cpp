class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x % space]++;
        }

        int maxi = 0;
        int ans = INT_MAX;

        for(int x : nums) {
            if(mp[x % space] > maxi) {
                maxi = mp[x % space];
                ans = x;
            }
            else if(mp[x % space] == maxi) {
                ans = min(ans, x);
            }
        }

        return ans;
    }
};