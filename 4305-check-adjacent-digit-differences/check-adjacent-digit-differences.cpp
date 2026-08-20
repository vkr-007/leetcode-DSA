class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        //not using int, instead using ascii value
        
        for(int i=1;i<s.size();i++){
            if(abs(s[i]-s[i-1])>2){
                return false;
            }

        }
        return true;
    }
};