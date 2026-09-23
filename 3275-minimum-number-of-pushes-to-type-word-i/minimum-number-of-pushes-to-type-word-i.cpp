class Solution {
public:
    int minimumPushes(string s) {
        int ans=0;
        int n=s.size();
        int m=1;

        while(n>0){
            int x = min(n, 8);
            ans += m * x;
            n -= x;
            m++;
        }
        return ans;
    }
};