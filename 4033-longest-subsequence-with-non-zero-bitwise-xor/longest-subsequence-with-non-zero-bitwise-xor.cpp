class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool neg = false;
        for(auto e:nums){
            x^=e;
            if(e!=0){
               neg= true;
            }
        }
        if(x!=0) return nums.size();
        if(neg){
            return nums.size()-1;
        }
        return 0;
    }
};