class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> t (26,false);
        for(auto x:sentence){
         t[x-'a']= true;
        }
        for(auto x: t){
            if(x==false){
                return false;
            }
        }
        return true;
    }
};