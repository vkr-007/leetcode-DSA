class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans(nums.size(),0);
        int k=0;
        for(auto x:nums){
            if(x!=val){
                ans[k++]=x;
            }
        }
        nums=ans;
        return k;
    }
};