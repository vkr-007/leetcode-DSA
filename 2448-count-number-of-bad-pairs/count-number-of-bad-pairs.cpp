class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
       unordered_map<int,long long> mp;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int val= nums[i]-i;
            ans+=i-mp[val];
            mp[val]++;
        }
        return ans;
    }
};