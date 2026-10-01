class Solution {
public:
    bool divideArray(vector<int>& nums) {
 vector<int> f(501, 0);

        for (int x : nums) {
            f[x]++;
        }
        for (int i = 1; i <= 500; i++) {
            if (f[i] % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};