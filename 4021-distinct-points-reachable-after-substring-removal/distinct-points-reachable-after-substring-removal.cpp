class Solution {
public:
    int distinctPoints(string s, int k) {
        int n=s.size();
        int x=0, y=0;
        set<pair<int,int>> st;
        for(auto c:s){
            if(c == 'U') y++;
            else if(c == 'D') y--;
            else if(c == 'L') x--;
            else if(c == 'R') x++;
        }
      int wx=0,wy=0;
      for(int i=0;i<k;i++){
            if(s[i] == 'U') wy++;
            else if(s[i] == 'D') wy--;
            else if(s[i]== 'L')wx--;
            else if(s[i] == 'R') wx++;
      }
      st.insert({x-wx,y-wy});
      for(int i=k;i<n;i++){
        if(s[i-k] == 'U') wy--;
            else if(s[i-k] == 'D') wy++;
            else if(s[i-k]== 'L') wx++;
            else if(s[i-k] == 'R') wx--;
        
        if(s[i] == 'U') wy++;
            else if(s[i] == 'D') wy--;
            else if(s[i]== 'L')wx--;
            else if(s[i] == 'R') wx++;
        st.insert({x-wx,y-wy});
      }
      return st.size();
    }
};