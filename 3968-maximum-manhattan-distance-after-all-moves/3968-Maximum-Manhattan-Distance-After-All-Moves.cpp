class Solution {
public:
    int maxDistance(string moves) {
        int x = 0, y = 0, k = 0;

        for (auto &c : moves) {
            x += (c == 'R');
            x -= (c == 'L');
            y += (c == 'U');
            y -= (c == 'D');
            k += (c == '_');
        }

        return abs(x) + abs(y) + k;
    }
};