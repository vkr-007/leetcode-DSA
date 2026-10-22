class Solution {
public:
    string sortSentence(string s) {
        vector<string> temp(10);
        string t = "";
        for (auto x : s) {
            if (x == ' '){
                    int n = t.back() - '0';
                    t.pop_back();
                    temp[n] =t;
                    t = "";
                }
            else {
                t += x;
            }
        }
        int n = t.back() - '0';
        t.pop_back();
        temp[n] = t;
        string ans = "";
        for (int i = 1; i < 10; i++) {
            if (temp[i] != "") {
                if (ans != "")
                    ans += " ";
                ans += temp[i];
            }
        }

        return ans;
        //temp
    }
};