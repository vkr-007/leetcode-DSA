class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a=0,b=0;
        for(auto x:nums){
            a+=x;
            string s= to_string(x);
            for(auto y:s){
                b+= y-'0';

            }
        }
        //temp
        return abs(a-b);
    }
};