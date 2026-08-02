class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> v;
       for(int i=0;i<nums.size();i++){
        int dif=target-nums[i];
         if(v.find(dif)!=v.end()){
            return {v[dif],i};
         }else{
            v[nums[i]]=i;
         }
       }
       return {};
    }
};