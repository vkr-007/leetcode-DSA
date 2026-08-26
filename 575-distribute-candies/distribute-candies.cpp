class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        set<int> types;
        for(auto x: candyType){
           types.insert(x);
        }
        return (types.size()>=n) ?n:types.size();
    }
};