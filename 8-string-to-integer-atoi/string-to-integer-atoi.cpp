class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        bool n = false;
        int i = 0;
        bool f=false;
        while (i < s.size()) {
            if (s[i] == ' ' && !f){
                i++;
                continue;}
            if ((s[i] == '-' || s[i] == '+') && !f) {
                n = (s[i] == '-');
                f=true;
                i++;
                continue;
            }

            if (isdigit(s[i])) {
                f=true;
                ans = ans * 10 + (s[i] - '0');
                i++;
                if (ans > INT_MAX){
                    return n? INT_MIN: INT_MAX;
                } 
                    


            } else {
                break;
            }
        }

        return n ? -ans : ans;
    }
};