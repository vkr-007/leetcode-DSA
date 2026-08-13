class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(auto x: s){
            if(s.find(x-1)==s.end()){
                int curr=x;
                int count=1;
                while(s.find(curr+1)!=s.end()){
                    curr++;
                    count++;
                }
                ans= max(ans,count);
            }

        }
        return ans;
    }
};