class Solution {
public:
 void nextPermutation(string &s) {

        int n = s.size();
        int i = n - 2;

        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }

        if (i >= 0) {
            int j = n - 1;

            while (s[j] <= s[i]) {
                j--;
            }
            swap(s[i], s[j]);
        }
        reverse(s.begin() + i + 1,s.end());
    }
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