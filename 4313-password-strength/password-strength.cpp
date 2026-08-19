class Solution {
public:
// set approach

    int passwordStrength(string password) {
        bool seen[256] = {};
        int ans = 0;

        for(char c : password) {
            if(seen[c])
                continue;

            seen[c] = true;

            if(c >= 'a' && c <= 'z')
                ans += 1;
            else if(c >= 'A' && c <= 'Z')
                ans += 2;
            else if(c >= '0' && c <= '9')
                ans += 3;
            else
                ans += 5;
        }

        return ans;
    }
};