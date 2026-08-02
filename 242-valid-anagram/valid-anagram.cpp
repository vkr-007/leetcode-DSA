class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> v1;

        for(auto ch:s){
           v1[ch]++;
        }
         unordered_map<char,int> v2;

        for(auto ch:t){
           v2[ch]++;
        }
        return v1==v2;

    }
};