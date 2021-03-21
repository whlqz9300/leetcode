class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        int row = grid.size();
        if (!row) return 0;
        int col = grid[0].size();
        int count = 0;

        for (unsigned i = 0; i != row; ++i) {
        	for (unsigned j = 0; j != col; ++j) {
        		if (grid[i][j] == '1') {
        			dfs(grid, i, j); ++count;
        		}
        	}
        }

        return count;
    }
    void dfs(vector<vector<char>> &grid, unsigned i, unsigned j) {
    	int dx[4] = {1, 0, -1, 0};
    	int dy[4] = {0, 1, 0, -1};
    	int row = grid.size(), col = grid[0].size();
    	grid[i][j] = '0';

    	for (int k = 0; k != 4; ++k) {
    		int new_i = i + dx[k], new_j = j + dy[k];
    		if (new_i >=0 && new_i < row && new_j >= 0 && new_j < col && grid[new_i][new_j] == '1')
    			dfs(grid, new_i, new_j);
    	}
    }
};