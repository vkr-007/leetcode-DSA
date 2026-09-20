class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=k;
        int ans= 0;
        int mxi=nums[0];
        while(j<n){
            mxi=max(mxi,nums[j-k]);
            ans=max(ans,nums[j]+mxi);
            j++;
        }
        return ans;
    }
};