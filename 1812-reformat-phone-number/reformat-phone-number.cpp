class Solution {
public:
    string reformatNumber(string number) {
        string s;
        
        for(char c : number)
            if(c != ' ' && c != '-')
                s += c;

        string ans;
        int n = s.size(), i = 0;

        while(n - i > 4) {
            ans += s.substr(i, 3) + "-";
            i += 3;
        }

        if(n - i == 4)
            ans += s.substr(i, 2) + "-" + s.substr(i + 2, 2);
        else
            ans += s.substr(i);

        return ans;
    }
};