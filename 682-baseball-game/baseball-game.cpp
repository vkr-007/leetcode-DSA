class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;

        for (auto x : op) {
            if (x == "C") {
                st.pop();
            }
            else if (x == "D") {
                st.push(2 * st.top());
            }
            else if (x == "+") {
                int a = st.top();
                st.pop();

                int b = st.top();

                st.push(a);
                st.push(a + b);
            }
            else {
                st.push(stoi(x));
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};