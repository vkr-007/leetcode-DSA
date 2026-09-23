class Solution {
public:
    int minimumPushes(string s) {
        int ans=0;
        int n=s.size();
       for(int i=0;i<n;i++){
        ans+=(i/8)+1;
       }
       return ans;
    }
};