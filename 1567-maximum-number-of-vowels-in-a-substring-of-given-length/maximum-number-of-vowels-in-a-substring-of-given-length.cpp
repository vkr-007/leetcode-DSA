class Solution {
public:
    int maxVowels(string s, int k) {
        bool vowel[128] = {};

        vowel['a'] = vowel['e'] = vowel['i'] = vowel['o'] = vowel['u'] = true;

        int cnt = 0;

        for(int i = 0; i < k; i++)
            cnt += vowel[s[i]];

        int ans = cnt;

        for(int i = k; i < s.size(); i++) {
            cnt += vowel[s[i]];
            cnt -= vowel[s[i-k]];
            ans = max(ans, cnt);
        }

        return ans;
    }
};