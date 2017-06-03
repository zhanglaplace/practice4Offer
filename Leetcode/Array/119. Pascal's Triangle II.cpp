class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res;
        res.resize(rowIndex+1);
        for(int i = 0 ; i < rowIndex+1;++i){
            res[i].resize(i+1);
            res[i][0] = 1;
            res[i][res[i].size()-1]= 1;
            for(int j = 1; j < res[i].size()-1;++j){
                res[i][j] = res[i-1][j-1]+res[i-1][j];
            }
        }
        return res[rowIndex];
    }
};