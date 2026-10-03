class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> f(26, 0);

        for(auto x : words) {
            for(auto y : x) {
                f[y - 'a']++;
            }
        }

        for(auto x : f) {
            if(x == 0) continue;
            else {
                if(x % words.size() != 0)
                    return false;
            }
        }

        return true;
    }
};