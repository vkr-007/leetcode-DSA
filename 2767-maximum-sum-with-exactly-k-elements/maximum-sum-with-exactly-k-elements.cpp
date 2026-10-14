class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(k--){
            ans+=n;
            n++;
        }
        return ans;
        //temp;
    }
};