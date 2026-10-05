class Solution {
public:
    int minOperations(vector<string>& logs) {
        int op = 0;

        for (auto x : logs) {
            if (x == "../") {
                if (op > 0)
                    op--;
            }
            else if (x != "./") {
                op++;
            }
        }

        return op;
    }
};