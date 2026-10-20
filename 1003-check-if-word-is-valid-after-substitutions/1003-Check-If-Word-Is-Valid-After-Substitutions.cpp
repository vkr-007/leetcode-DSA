class Solution {
public:
    bool isValid(string s) {
             while (s.find("abc") != string::npos) {
            int i = s.find("abc");
            s.erase(i, 3);
        }

        return s.empty(); 
        //temp
    }
};