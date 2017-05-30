class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int col = nums[0].size();
        if(row * col != r*c)
            return nums;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int k = i * col + j;
                res[k / c][k % c] = nums[i][j];
            }
        }
        return res;
    }
};