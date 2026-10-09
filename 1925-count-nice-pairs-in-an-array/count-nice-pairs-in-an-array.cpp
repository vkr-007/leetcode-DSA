class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int mod= 1e9+7;
        unordered_map<int,long long> mp;
        long long ans=0;
        for(auto x:nums){
            int n=x;
            int rev=0;
            while(n>0){
                rev= rev*10+(n%10);
                n/=10;
            }
            int val= x-rev;
            ans= (ans+mp[val])%mod;
            mp[val]++;
        }
        return ans;
    }
};