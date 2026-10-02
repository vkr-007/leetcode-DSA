class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> p, q;

        for(auto x : s) {
            if(x == '#') {
                if(!p.empty())
                    p.pop();
            }
            else {
                p.push(x);
            }
        }

        for(auto x : t) {
            if(x == '#') {
                if(!q.empty())
                    q.pop();
            }
            else {
                q.push(x);
            }
        }

        return p == q;
    }
};