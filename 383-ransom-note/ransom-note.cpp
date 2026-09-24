class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> f1(26, 0);
        for (auto x : ransomNote) {
            f1[x - 'a']++;
        }
        vector<int> f2(26, 0);
        for (auto x : magazine) {
            f2[x - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (f1[i] > f2[i]) {
                return false;
            }
           
        }
         return true;
        }
    };