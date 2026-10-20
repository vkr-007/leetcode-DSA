class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while (ty > sy && tx > sx) {
            if (ty > tx) {
                ty %= tx;
            } else {
                tx = tx % ty;
            }
        }
        if (tx == sx && ty >= sy && (ty - sy) % sx == 0)
            return true;

        if (ty == sy && tx >= sx && (tx - sx) % sy == 0)
            return true;

        return false;
    }
};