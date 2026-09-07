class Solution {
public:
    int distinctSubseqII(string s) {
        long long mod= 1e9+7;
        vector<long long> dp(26,0);
        long long total=0;
        for(auto c:s){
            int i=c-'a';
            long long newcount=(total+1)%mod;
            total=(total+newcount-dp[i]+mod)%mod;
            dp[i]=newcount;

        }
        return total;
    }
};