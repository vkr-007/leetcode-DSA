class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> s_min(n);

        int mx=nums[0];
        s_min[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            s_min[i]=min(s_min[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
             mx= max(mx,nums[i]);
             if(mx-s_min[i]<=k){
                return i;
             } 
        }
        return -1;
    }
};