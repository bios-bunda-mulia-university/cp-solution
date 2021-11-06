class Solution {
public:
    const int MAX_TRIANGLE_ROW = 34;
    vector<vector<int>> pascalTriangle;
    
    Solution() {
        pascalTriangle.resize(MAX_TRIANGLE_ROW);
        
        for (int i=0; i<MAX_TRIANGLE_ROW; i++) {
            pascalTriangle[i].resize(i+1);
            pascalTriangle[i][0] = pascalTriangle[i][i] = 1;
            
            for (int j=1; j<i; j++) {
                pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
            }
        }
    }
    
    vector<int> getRow(int rowIndex) {
        return pascalTriangle[rowIndex];
    }
};