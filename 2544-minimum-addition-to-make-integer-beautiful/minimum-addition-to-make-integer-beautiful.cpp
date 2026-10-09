class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long ans=0;
        long long p=1;
        while(true){
            long long sum=0, x=ans+n;
            while(x>0){
                sum+=x%10;
                x/=10;
            } 
            if(sum<=target){
                return ans;
            }
            ans= (n/p+1)* p-n;
            p*=10;
        }
    }
};