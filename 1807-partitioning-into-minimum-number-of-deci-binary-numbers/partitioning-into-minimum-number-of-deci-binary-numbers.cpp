class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(auto x:n){
            ans= max(ans,x-'0');
            if(ans==9) break;
        }
        return ans;
    }
};