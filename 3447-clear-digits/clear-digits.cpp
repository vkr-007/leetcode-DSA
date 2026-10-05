class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for (auto x : s) {
            if (isdigit(x)) {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(x);
            }
        }
        string ans="";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
