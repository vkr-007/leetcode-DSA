class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int ans=0;
        int ones=0;
        int maxones=0;
        for(int r=0;r<nums.size();r++){
             if(nums[r]==1){
                ones++;
             }
             maxones= max(maxones,ones);
             while(((r-l+1)-maxones)>k){
                 if(nums[l] == 1) {
                    ones--;// remember to check ones
                }
                l++;
             }
             ans= max(ans,r-l+1);

        }
        return ans;
    }
};