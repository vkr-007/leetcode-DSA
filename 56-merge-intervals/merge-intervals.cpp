class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        for(auto x: v){
            if(ans.empty()|| ans.back()[1]<x[0]){
                ans.push_back(x);
            }
            else{
                ans.back()[1]=max(ans.back()[1],x[1]);
            }
        }

        
        return ans;
    }
};