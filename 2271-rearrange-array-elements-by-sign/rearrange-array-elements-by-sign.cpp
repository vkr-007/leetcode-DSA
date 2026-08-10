class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int> v(nums.size());
      int p = 0;
      int n = 1;

for (int x : nums) {
    if (x >= 0) {
        v[p] = x;
        p += 2;
    } else {
        v[n] = x;
        n += 2;
    }
}
      return v;
    }
};