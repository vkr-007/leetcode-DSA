class Solution {
public:
    string getPermutation(int n, int k) {
    vector<string> v = {
    "1",
    "12",
    "123",
    "1234",
    "12345",
    "123456",
    "1234567",
    "12345678",
    "123456789"
};
string s= v[n-1];
while(k-1>0){
    next_permutation(s.begin(),s.end());
    k--;
}
return s;

    }
};