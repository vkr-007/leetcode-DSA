class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        long long op=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i] > k && i<=n/2)
                op += nums[i] - k;
            else if(nums[i] < k && i>=n/2)
                op += k - nums[i];
        }
        return op;
    }

};