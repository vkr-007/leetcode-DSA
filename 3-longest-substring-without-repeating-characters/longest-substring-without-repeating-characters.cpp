class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> seen(128, false);
        //sliding windows

        int l = 0, ans = 0;

        for(int r = 0; r < s.size(); r++) {

            while(seen[s[r]]) {
                seen[s[l]] = false;
                l++;
            }

            seen[s[r]] = true;
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};