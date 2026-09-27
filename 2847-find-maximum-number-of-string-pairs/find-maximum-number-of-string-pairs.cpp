class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
         unordered_set<string> st;
        int count = 0;

        for (auto x :s) {
            string rev = x;
            reverse(rev.begin(), rev.end());

            if (st.find(rev) != st.end()) {
                count++;
            }

            st.insert(x);
        }

        return count;
    }
};