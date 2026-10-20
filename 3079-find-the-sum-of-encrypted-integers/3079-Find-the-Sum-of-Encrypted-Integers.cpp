class Solution {
public:
    int encrypt(int x){
        int n=0;
        int mx=0;
        while(x>0){
          mx=max(mx,x%10);
          x/=10;
          n++;
        }
        int ans=0;
        while(n--){
           ans= ans*10 +mx;
        }
        return ans;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
       int ans=0;
       for(auto x:nums){
          ans+=encrypt(x);
       }
       return ans;
    }
};