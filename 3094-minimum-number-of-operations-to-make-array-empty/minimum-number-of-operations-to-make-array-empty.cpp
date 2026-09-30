class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int op=0;
        for(auto x:nums)
        {
            mp[x]++;}
        for(auto p:mp){
            int t=p.second;
            if(t==1){
                return -1;
            }
           op += t / 3;

            if(t % 3 != 0){
                op++;
            }

        }
    return op;

    }
};