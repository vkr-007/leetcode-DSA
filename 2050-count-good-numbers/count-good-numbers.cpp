class Solution {
public:
    long long p( long long x,long long n, long long mod){
        long long ans=1;
        while(n>0){
            if(n%2==1){
                ans=( ans*x)% mod;

            }
            x=(x*x)%mod;
            n/=2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long mod= 1e9+7;
        long long even=(n+1)/2;
        long long odd=n-even;
        long long a =p(5,even,mod);
        long long b=p(4,odd,mod);
        return (a*b)%mod;
    }
};