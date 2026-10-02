class Solution {
public:
    string reformatNumber(string number) {
        string ans;
        int count = 0;

        for(char c : number) {
            if(c == ' ' || c == '-') continue;

            ans.push_back(c);

            if(++count == 3) {
                ans.push_back('-');
                count = 0;
            }
        }

        if(ans.back() == '-')
            ans.pop_back();

        if(count == 1)
            swap(ans[ans.size()-2], ans[ans.size()-3]);

        return ans;
    }
};