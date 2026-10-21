class Solution {
public:
    int minOperations(string s) {
        if(is_sorted(s.begin(),s.end()))return 0;
        int n = s.size();
        if (n == 2) return -1;
        char min_c = *min_element(begin(s), end(s));
        char max_c = *max_element(begin(s), end(s));
        if(s[0]==min_c|| s[n-1]==max_c)return 1;
        char max_m = *max_element(begin(s)+1, end(s)-1);
        char min_m = *min_element(begin(s)+1, end(s)-1);
        if(s[0]>max_m&& s[n-1]<min_m)return 3;
        return 2;
    }
};