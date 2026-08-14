class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int i = 0;
        string str = to_string(x);
        int j = str.size() - 1;

        while(i < j) {
            if(str[i] != str[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};