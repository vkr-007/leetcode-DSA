class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> n;
        for(auto x:nums ){
           n.insert(x);
        }
        vector<int> ans;
      for(auto it = n.rbegin(); it != n.rend() && k > 0; it++) {
            ans.push_back(*it);
            k--;
        }
        return ans;
    }
};