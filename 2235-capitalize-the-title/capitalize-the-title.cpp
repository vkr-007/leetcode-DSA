class Solution {
public:
    string capitalizeTitle(string s) {
          for(auto &x : s)
            x = tolower(x);

        for(int i = 0; i < s.size(); i++) {
            if(i == 0 || s[i-1] == ' ') {
                int j = i;
                while(j < s.size() && s[j] != ' ')
                    j++;

                if(j - i > 2)
                    s[i] = toupper(s[i]);
            }
        }
        return s;
    }
};