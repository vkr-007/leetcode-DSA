class Solution {
public:
    int d(vector<int>& p1, vector<int>& p2){
        int a= p1[0]-p2[0];
        int b= p2[1]-p1[1];
        return a*a + b*b;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> v={
            d(p1,p2), d(p1,p3), d(p1,p4),
            d(p2,p3), d(p2,p4), d(p3,p4)
        };
        sort(v.begin(),v.end());
        return v[0] > 0 &&
               v[0] == v[1] &&
               v[1] == v[2] &&
               v[2] == v[3] &&
               v[4] == v[5] &&
               v[4] == 2 * v[0];
    }
};