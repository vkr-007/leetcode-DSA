class Solution {
public:
    bool checkOverlap(int r, int xC, int yC, int x1, int y1, int x2, int y2) {
        int p1=max(x1,min(xC,x2));
        int p2=max(y1,min(yC,y2));

        int dx= xC-p1;
        int dy= yC-p2;
        return (dx*dx)+(dy*dy)<=r*r;
    }
};