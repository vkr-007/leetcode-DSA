class Solution {
public:
    int minOperations(string s) {
        char m = 'z';
        bool found = false;

        for(char c : s) {
            if(c != 'a') {
                m = min(m, c);
                found = true;
            }
        }

        if(!found) return 0;

        return 26 - (m - 'a');
    }
};