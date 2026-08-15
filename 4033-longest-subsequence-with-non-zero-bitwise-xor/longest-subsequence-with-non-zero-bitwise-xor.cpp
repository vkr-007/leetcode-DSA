class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool neg = false;
        for(auto e:nums){
            x^=e;// checking xor of all
            if(e!=0){
               neg= true;// checking for non zero element
            }
        }
        if(x!=0) return nums.size();// xor of all is non zero
        if(neg){
            return nums.size()-1;// zero
        }
        return 0;
    }
};