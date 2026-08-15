class Solution {
public:
    vector<vector<string>> ans;
    bool issafe(vector<string>& b, int r, int c, int n) {
        // column
        for (int i = 0; i < r; i++) {
            if (b[i][c] == 'Q') {
                return false;
            }
        }
        // -ve dig
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if (b[i][j] == 'Q') {
                return false;
            }
        }
        // +ve dig
        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) {
            if (b[i][j] == 'Q') {
                return false;
            }
           
        } return true;
        }

        void solve(vector<string> & b, int r, int n) {
            // all queens are placed
            if (r == n) {
                ans.push_back(b);
                return;
            }
            // tryin every col
            for (int c = 0; c < n; c++) {
                if (issafe(b, r, c, n)) {
                    // place the queen
                    b[r][c] = 'Q';

                    // movig to next row
                    solve(b, r + 1, n);

                    // backtrack, removing queen
                    b[r][c] = '.';// helps to chec every posibility
                    
                }
            }
        }

        vector<vector<string>> solveNQueens(int n) {
            vector<string> b(n, string(n, '.'));
            solve(b, 0, n);
            return ans;
        }
    };