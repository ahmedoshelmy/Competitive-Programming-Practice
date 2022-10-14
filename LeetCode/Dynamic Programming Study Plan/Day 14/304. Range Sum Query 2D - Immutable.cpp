class NumMatrix {
public:
    vector<vector<int>> grid;
    NumMatrix(vector<vector<int>>& matrix) {
           int n = matrix.size() , m = matrix[0].size() ;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                matrix[j][i] += matrix[j-1][i];
            }
        }
        grid = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(!row1 && !col1)return grid[row2][col2] ;
        if(!row1) return grid[row2][col2] - grid[row2][col1-1]; 
        if(!col1) return grid[row2][col2] - grid[row1-1][col2];
        return grid[row2][col2] - grid[row1-1][col2] - grid[row2][col1-1] + grid[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
