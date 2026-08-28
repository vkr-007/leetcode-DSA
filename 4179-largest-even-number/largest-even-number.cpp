class Solution {
public:
    string largestEven(string s) {
        int n= s.size()-1;
        string ans="";

        while(n>=0){
          if((s[n]-'0')%2==0){
            ans= s.substr(0,n+1);
            break;
          }
          n--;
        }
        return ans;
    }
};