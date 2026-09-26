class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> result;
        unordered_set<int> curr;
        for (auto x : arr) {
           unordered_set<int> next;
            next.insert(x);
            for (auto a : curr) {
                next.insert(a | x);
            }
            curr = next;
            for (auto q : curr) {
                result.insert(q);
            }
        }
        return result.size();
    }
};