class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> temp;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                int x = 0;
                while (i < n && isdigit(s[i])) {
                    x = x * 10 + (s[i] - '0');
                    i++;
                }
                temp.push_back(x);
            }
        }
        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] <= temp[i - 1])
                return false;
        }

        return true;
    }
};