class Solution {
public:
int gcd(int a, int b) {
        while (b) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int cg=0;
            for(int j=i;j<n;j++){
                cg=gcd(cg,nums[j]);
                if(cg==k){
                   ans++;
                }
                if(cg<k){
                  break;
                }
            }
        
        }
        return ans;
    }
};