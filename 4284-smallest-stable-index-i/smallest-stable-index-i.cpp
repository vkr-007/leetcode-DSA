class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int t1=nums[0];
        for(int i=0;i<nums.size();i++){
            t1=max(nums[i],t1);
            int t2 = *min_element(nums.begin() + i, nums.end());
            if(t1-t2<=k){
                return i;
            }
        }
        return -1;
    }
};