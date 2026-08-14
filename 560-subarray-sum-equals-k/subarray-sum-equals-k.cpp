class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int c=0;
        int sum=0;
        unordered_map <int,int> mp;
        mp[0]=1;
        for(auto x: nums){
            sum+=x;
            if(mp.find(sum-k)!=mp.end()){
                c+=mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};