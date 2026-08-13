class Solution {
public:
  
    void setZeroes(vector<vector<int>>& v) {
        unordered_set<int> r;
        unordered_set<int> c;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==0){
                   r.insert(i);
                   c.insert(j);
                }
            }
        }
        for(auto x: r){
            for(int j=0;j<v[0].size();j++){
                v[x][j]=0;
            }
        }
         for(auto x: c){
            for(int i=0;i<v.size();i++){
                v[i][x]=0;
            }
        }

    }
};