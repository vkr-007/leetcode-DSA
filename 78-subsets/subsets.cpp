class Solution {
public:

 vector<vector<int>> ans;
 void helper(vector<int> a, int i,int n, vector<int> temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
       temp.push_back(a[i]);
        helper(a, i+1, n, temp);
        temp.pop_back();
        helper(a, i+1, n, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
          helper(nums,0,nums.size(),{});
        return ans;
    }
};