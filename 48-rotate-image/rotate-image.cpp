class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int r=v.size();
        for(int i =0;i<r;i++){
            for(int j=i+1;j<r;j++){
               swap(v[i][j], v[j][i]);
            }
        }
       for(int i=0;i<r;i++){
        reverse(v[i].begin(),v[i].end());
       }

    }
};