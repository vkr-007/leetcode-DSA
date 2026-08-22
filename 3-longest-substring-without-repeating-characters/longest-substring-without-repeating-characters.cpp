class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> v1(128, false);
        int l = 0;
        int ans = 0;
        for (int r = 0; r < s.size(); r++) {
                
                while (v1[s[r]]) {

                    v1[s[l] ] = false;
                    l++;
                }
            
            v1[s[r]] = true;
            ans= max(ans,r-l+1);
        }
        return ans;
    }
};