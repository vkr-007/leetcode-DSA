class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     vector<int> ans;
     unordered_map<int,int>mp;
     for(auto x: nums){
        mp[x]++;
     }   
     int i= nums.size()/3;
     for(auto x:mp){
        if(x.second>i){
            ans.push_back(x.first);
        }
     }
     return ans;
    }
};