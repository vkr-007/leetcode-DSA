class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        int mx=0;
        int ans=nums[0];
        for(auto p:mp){
            if(p.second>mx){
               mx=p.second;
              ans=p.first;
            }
        }
        return ans;
    }
};