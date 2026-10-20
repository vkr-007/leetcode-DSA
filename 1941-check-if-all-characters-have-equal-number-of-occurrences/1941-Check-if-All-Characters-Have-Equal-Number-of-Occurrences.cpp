
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int a[26] = {};

        for (char c : s) {
            a[c - 'a']++;
        }

        int x = 0;

        for (int i = 0; i < 26; i++) {
            if (a[i] > 0) {
                if (x == 0)
                    x = a[i];
                else if (a[i] != x)
                    return false;
            }
        }

        return true;
    }
};
