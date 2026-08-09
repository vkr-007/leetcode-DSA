class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0;
        int ma=v[0];
        for(auto x: v){
         sum+=x;
         ma= max(ma,sum);
         if(sum<0){
            sum=0;
         }

        }
        return ma;
    }
};