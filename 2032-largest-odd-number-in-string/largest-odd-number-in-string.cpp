class Solution {
public:
    string largestOddNumber(string num) {
          int i=num.size();
          int n=i;
          char ch=num[0];
          while(n>0){
             if((num[n-1]-'0')%2==1){
             return num.substr(0,n);
 }
          
          n--;
          }
     return "";
    }

};