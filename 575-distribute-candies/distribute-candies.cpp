class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        unordered_set<int> types;
        for(auto x: candyType){
           types.insert(x);
        }
        return min((int)types.size(),n);
    }
};