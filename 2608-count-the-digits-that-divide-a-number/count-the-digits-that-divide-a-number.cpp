class Solution {
public:
    int countDigits(int num) {
        int d=num;
        int ans=0;
        while(num>0){
            if(d%(num%10)==0){
                ans++;
            }
            num=num/10;
        }
        return ans;
    }
};