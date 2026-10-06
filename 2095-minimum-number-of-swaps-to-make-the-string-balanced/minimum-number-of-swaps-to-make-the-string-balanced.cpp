class Solution {
public:
    int minSwaps(string s) {
        int temp=0;
        int ans=0;
        for(auto x: s){
            if(x=='['){
                temp++;
            }else{
                temp--;
                if(temp<0){
                    ans++;
                    temp=1;
                }
            }
        }
        return ans;
    }
};