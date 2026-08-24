class Solution {
public:
    string reversed(string &s){
          reverse(s.begin(),s.end());
          reverse(s.begin(),s.begin()+1);
          reverse(s.begin()+1,s.end());
          return s;
    }
    bool rotateString(string s, string goal) {
        int n= s.size();
        while(n>0){
            reversed(s);
            if(s==goal){
                return true;
            }
          n--;  
        }
        
 return false;

    }
   
};