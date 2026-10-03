class Solution {
public:
    int numberOfSpecialChars(string s) {
            set<char> st(s.begin(),s.end());
        int ans=0;
        for(char c='Z';c>='A';c--){
            if(st.count(c) && st.count(c+32)){
               ans++;
            }

        }
        return ans;
    }
};