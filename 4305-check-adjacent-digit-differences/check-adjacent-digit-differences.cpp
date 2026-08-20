class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=0;i<s.size()-1;i++){
            int x=s[i]-'0';
            int y= s[i+1]-'0';
            if(abs(x-y)>2){
                return false;
            }

        }
        return true;
    }
};