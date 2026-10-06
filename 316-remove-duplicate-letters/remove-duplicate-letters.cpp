class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        stack<char> st;
        vector<bool> taken(26, false);
        vector<int> lastidx(26);
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            lastidx[ch - 'a'] = i;
        }
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            if (taken[idx])
                continue;
            while (!st.empty() && s[i] < st.top() &&
                   lastidx[st.top() - 'a'] > i) {

                taken[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(s[i]);
            taken[idx] = true;
        }
        string r = "";
        while (!st.empty()) {
            r += st.top();
            st.pop();
        }
        reverse(r.begin(), r.end());
        return r;
    }
};