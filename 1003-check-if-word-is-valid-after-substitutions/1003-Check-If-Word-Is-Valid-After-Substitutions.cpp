class Solution {
public:
    bool isValid(string s) {
     string temp="";
     for(auto x:s){
        temp+=x;
        int n=temp.size();
        if(n>=3 && temp.substr(n-3)=="abc"){
           temp.pop_back();
                temp.pop_back();
                temp.pop_back();
            }
        }

        return temp.empty();
        
     
    }
};