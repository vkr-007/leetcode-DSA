class Solution {
public:
    int divide(int dd, int dv) {
        if (dd == INT_MIN && dv == -1)
            return INT_MAX;
          
        long long a= abs((long long )dd);
        long long ans=0;
        long long b= abs((long long )dv);
        while(a>=b){
            long long x=b;
            long long m=1;
            while((x<<1)<=a){
                x<<=1;
                m<<=1;
            }
            a-=x;
            ans+=m;
        }
        return ((dd < 0) ^ (dv < 0)) ? -ans : ans;
    }
};