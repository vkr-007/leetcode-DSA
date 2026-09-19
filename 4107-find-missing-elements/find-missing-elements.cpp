class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int s= nums[0];
        int l= nums[0];
        unordered_set<int> n;
        for(auto x:nums){ 
            n.insert(x);
            s=min(s,x);
            l=max(l,x);
        }
        vector<int> ans;
        for(int i=s;i<=l;i++){
            if(n.find(i)==n.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};