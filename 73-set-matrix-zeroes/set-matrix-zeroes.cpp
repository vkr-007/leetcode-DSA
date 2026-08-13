class Solution {
public:
  
    void setZeroes(vector<vector<int>>& v) {
        vector<bool> r (v.size(),false);
        vector<bool> c(v[0].size(),false);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==0){
                   r[i]= true;
                   c[j]= true;
                }
            }
        }
         for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[0].size(); j++) {
            if(r[i] || c[j]) {
                v[i][j] = 0;        }}}

    }
};