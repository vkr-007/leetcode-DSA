class Solution {
public:
    int maxDistance(string s, int k) {
        int x = 0, y = 0, ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'E') x++;
            else if (s[i] == 'W') x--;
            else if (s[i] == 'N') y++;
            else if (s[i] == 'S') y--;

            ans = max(ans, min(i + 1, abs(x) + abs(y) + 2 * k));
        }

        return ans;
    }
};