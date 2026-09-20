class Solution {
public:
    int dr(int n){
        int l=0,s=9;
        while(n>0){
            int d=n%10;
            l=max(l,d);
            s=min(s,d);
            n=n/10;
        }
        return l-s;
    }
    int maxDigitRange(vector<int>& nums) {
        int mx=0;
        for(auto x:nums){
            mx=max(mx,dr(x));
        }
        int ans=0;
        for(auto x:nums)
        {
            if(mx==dr(x)){
              ans+=x;
            }
        }

return ans;
    }
};