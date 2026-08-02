class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> v1;
        for(auto ch:s){
           v1[ch]++;
        }
        for(auto ch:t){
           v1[ch]--;
           if (v1[ch] < 0)
                return false;
        }
           return true;
    }
};