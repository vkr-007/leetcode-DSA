class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> st(begin(s),end(s));
        return st.size();
    }
};