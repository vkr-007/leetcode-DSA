class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        set<int> result;
        set<int> curr;
        for (auto x : arr) {
            set<int> next;
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