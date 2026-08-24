class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> m(128,-1);
        vector<int> n(128,-1);
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==-1 && n[t[i]]==-1){
                m[s[i]] =t[i];
                 n[t[i]]= s[i];
            }
            else if(m[s[i]]!=t[i] || n[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};