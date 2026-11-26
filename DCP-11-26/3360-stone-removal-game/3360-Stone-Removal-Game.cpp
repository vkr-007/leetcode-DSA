class Solution {
public:
    bool canAliceWin(int n) {
            int stones = n;
        int take = 10;

        while (stones >= take) {
            stones -= take;
            take--;
        }

        return take % 2 != 0;
    }
};