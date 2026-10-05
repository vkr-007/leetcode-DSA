class Solution {
public:
    int pivotInteger(int n) {
    
        int s=n*(n+1)/2;
        int t=0;
        for(int i=1;i<=n;i++){
            t+=i;
            if(t==s-t+i){
                return i;
            }

        }
        return -1;
    }
};