class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        set<int> unique, duplicate;

        for(int x : nums) {
            if(unique.find(x) != unique.end()) {
                duplicate.insert(x);
                unique.erase(x);
            }
            else if(duplicate.find(x) == duplicate.end()) {
                unique.insert(x);
            }
        }

        int sum = 0;

        for(int x : unique)
            sum += x;

        return sum;
    }
};