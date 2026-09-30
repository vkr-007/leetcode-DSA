class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d=0;
        vector<int> ans;
        for(auto x:seq){
            if(x=='('){
                d++;
            }
            ans.push_back(d%2);
            if(x==')'){
                 d--;
            }
        }
        return ans;
    }
};