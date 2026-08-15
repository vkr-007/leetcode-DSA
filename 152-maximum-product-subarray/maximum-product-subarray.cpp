class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int n= nums.size();
        
        int left=1;
        int right=1;

        for(int i=0;i<n;i++){
            left*= nums[i];
            right*=nums[n-i-1];
            ans= max(ans,max(left, right));
            if(left==0){
                left=1;

            }
            if(right==0){
                right=1;
            }

        }
      return ans;
    }
};