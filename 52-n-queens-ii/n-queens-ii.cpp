class Solution {
public:
    int ans = 0;

    bool issafe(vector<string>& b, int r, int c, int n) {

        // column
        for(int i = 0; i < r; i++) {
            if(b[i][c] == 'Q')
                return false;
        }

        // upper-left diagonal
        for(int i = r-1, j = c-1; i >= 0 && j >= 0; i--, j--) {
            if(b[i][j] == 'Q')
                return false;
        }

        // upper-right diagonal
        for(int i = r-1, j = c+1; i >= 0 && j < n; i--, j++) {
            if(b[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void solve(vector<string>& b, int r, int n) {

        if(r == n) {
            ans++;
            return;
        }

        for(int c = 0; c < n; c++) {

            if(issafe(b, r, c, n)) {

                b[r][c] = 'Q';

                solve(b, r + 1, n);

                b[r][c] = '.';
            }
        }
    }

    int totalNQueens(int n) {

        vector<string> b(n, string(n, '.'));

        solve(b, 0, n);

        return ans;
    }
};