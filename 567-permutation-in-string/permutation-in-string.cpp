class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size()) return false;
        //vector to count frequencies
        vector<int> v1(26, 0);
        vector<int> v2(26, 0);
        for (auto x : s1) {
            v1[x - 'a']++;
        }
        int k = s1.size();
        for (int i = 0; i < k; i++) {
            v2[s2[i] - 'a']++;
        }

        if (v1 == v2)
            return true;

        for (int i = k; i < s2.size(); i++) {
            v2[s2[i] - 'a']++;
            v2[s2[i - k]-'a']--;
            if (v1 == v2)
                return true;
        }
        return false;
    }
};