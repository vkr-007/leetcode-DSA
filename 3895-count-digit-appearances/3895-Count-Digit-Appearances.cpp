class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int d) {
        int ans=0;
        for(auto x:nums){
            while(x>0){
                if(x%10==d){
                    ans++;
                }
                x/=10;
            }

        }
        return ans;
    }
};