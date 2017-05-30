class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0 ;i < nums.size()+1;++i){
            cnt ^= i;
        }
        for(int i = 0 ; i < nums.size();++i ){
            cnt ^= nums[i];
        }
        return cnt;
    }
};