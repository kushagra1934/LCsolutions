class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for(int j=0; j<m; j++){
            int val = grid[0][j];
            for(int i=1; i<n; i++){
                if(grid[i][j] > val){
                    val = grid[i][j];
                    continue;
                }else{
                    count += val - grid[i][j] + 1;
                    val = val + 1;
                }
            }
        }
        return count;
    }
};