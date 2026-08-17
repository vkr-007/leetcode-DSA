class Solution {
public:
    int helper(int num){
           int ans=0;

        while(num>0){
            ans += num%10;
            num/=10;
        }
        return ans;
    }
    int addDigits(int num) {
       while(num>9){
        num= helper(num);
       }
       return num;

    }
};