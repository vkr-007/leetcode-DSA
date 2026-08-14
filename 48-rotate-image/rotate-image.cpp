class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int r=v.size();
        int c= v[0].size();
        vector<vector<int>> t(c, vector<int>(r));
        for(int i =0;i<r;i++){
            for(int j=0;j<c;j++){
                t[j][i]=v[i][j];
            }
        }
       for(int i=0;i<r;i++){
        reverse(t[i].begin(),t[i].end());
       }
       v=t;

    }
};