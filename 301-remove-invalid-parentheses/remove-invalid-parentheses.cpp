class Solution {
public:
    int n;
    unordered_set<string> st;
    void solve(string &s, int i, string& curr, int count, int &ml) {
        if (count < 0)
            return;
        if (i == n) {
            if (count == 0) {
                if (curr.size() > ml) {
                    ml = curr.size();
                    st.clear();
                }
                if (curr.size() == ml) {
                    st.insert(curr);
                }
            }
            return;
        }
        if (s[i] != '(' && s[i] != ')') {
            curr.push_back(s[i]);
            solve(s, i + 1, curr, count, ml);
            curr.pop_back();
            return;
        }
        curr.push_back(s[i]);
        solve(s, i + 1, curr, count + (s[i] == '(' ? 1 : -1), ml);
        curr.pop_back();
        solve(s, i + 1, curr, count, ml);
    }

    vector<string> removeInvalidParentheses(string s) {
         n = s.size();
        int ml = 0;
         st.clear();
        string curr = "";
        solve(s, 0, curr, 0, ml);
        //temp
        return vector<string>(begin(st), end(st));
    }
};