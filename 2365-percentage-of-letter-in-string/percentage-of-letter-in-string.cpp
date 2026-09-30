class Solution {
public:
    int percentageLetter(string s, char letter) {
        int sum = 0;
        int a = 0;
        for (auto x : s) {
            if (x == letter)
                a++;
            sum++;
        }

        return (a * 100 / sum);
    }
};