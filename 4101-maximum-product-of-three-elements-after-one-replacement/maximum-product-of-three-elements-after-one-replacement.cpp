class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.rbegin(),nums.rend());
        return 1LL * 100000* nums[0]*nums[1];
    }
};