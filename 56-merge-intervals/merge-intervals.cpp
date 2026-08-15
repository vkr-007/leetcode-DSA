class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i][1]>=v[i+1][0]){
                int n= v[i][0];
                int m=max(v[i+1][1],v[i][1]);
                v.erase(v.begin() + i , v.begin() + i + 2);
                v.insert(v.begin() + i ,{n,m} );
                i--;
            }

        }
        return v;
    }
};