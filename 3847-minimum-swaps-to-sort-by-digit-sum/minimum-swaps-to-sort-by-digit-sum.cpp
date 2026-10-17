class Solution {
public:
    int ds(int n1) {
        int ans = 0;
        while (n1 > 0) {
            ans += n1 % 10;
            n1 /= 10;
        }
        return ans;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> num2(nums);
        auto lamda = [&](int n1, int n2) {
            int dn1 = ds(n1);
            int dn2 = ds(n2);
            if (dn1 != dn2) {
                return dn1 < dn2;
            }
            return n1 < n2;
        } ;
        sort(num2.begin(), num2.end(), lamda);
        unordered_map<int, int> id;
        for (int i = 0; i < n; i++) {
            id[nums[i]] = i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int ac=num2[i];
            int curr=nums[i];
            if(ac==curr) continue;
            int idx=id[ac];
            nums[i]=ac;
            nums[idx]=curr;

            id[ac]=i;
            id[curr]=idx;
            ans++;
        }
        return ans;
    }
};