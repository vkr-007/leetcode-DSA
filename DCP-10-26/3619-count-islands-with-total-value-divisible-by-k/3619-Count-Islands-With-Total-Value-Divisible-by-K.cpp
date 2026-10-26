class Solution {
public:
    int m, n;
    vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    long long dfs(int i, int j, vector<vector<int>>& grid) {
        long long sum = grid[i][j];
        grid[i][j] = 0;
        for (auto x : directions) {
            int a = i + x[0];
            int b = j + x[1];
            if (a >= 0 && a < m && b >= 0 && b < n && grid[a][b] > 0) {
                sum += dfs(a, b, grid);
            }
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        int count=0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    long long sum = dfs(i, j, grid);
                    if (sum % k == 0) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};