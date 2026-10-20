class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> ans(2,0);
        int i=0;
        while(n>0){
            if(n%2==1){
                if(i%2==0){
                    ans[0]++;
                }else{
                    ans[1]++;
                }
            }
            n/=2;
            i++;}
            return ans;
    }
};