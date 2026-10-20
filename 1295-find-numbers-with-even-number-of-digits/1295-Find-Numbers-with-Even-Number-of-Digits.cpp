class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto x:nums){
            string temp = to_string(x);
            if(temp.size()%2==0){
                ans++;
            }
        }
    return ans;
    }
};