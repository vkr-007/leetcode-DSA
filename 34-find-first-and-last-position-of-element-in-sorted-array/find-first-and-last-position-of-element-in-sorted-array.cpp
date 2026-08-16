class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int lo=0;
        int hi= nums.size()-1;
        int l=-1,u=-1;
        while(lo<=hi){
            int mid= lo +(hi-lo)/2;
            if(nums[mid]==target){
                l=mid;
                hi=mid-1;
            }
            else if(nums[mid]>target){
                hi= mid-1;
                }
                else{
                lo= mid+1;
            }
        }
        lo=0, hi=nums.size()-1;
          while(lo<=hi){
            int mid= lo +(hi-lo)/2;
            if(nums[mid]==target){
                u=mid;
                lo=mid+1;
            }
            else if(nums[mid]<target){
                lo= mid+1;
            }
            else{
                hi= mid-1;
            }
        }
        return{l,u};
    }
};