class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int p=0;
      int n=0;
      vector<int> ans;
      while(p<nums.size()&& n<nums.size()){
        while(nums[p]<0){
            p++;

        }while(nums[n]>=0){
            n++;
        }
        ans.push_back(nums[p]);
        ans.push_back(nums[n]);
        p++;
        n++;

      }
      return ans;
    }
};