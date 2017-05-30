class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp = nums;
        sort(nums.begin(),nums.end());
        int index = 0;
        int cnt = 0;
        for(int i = 0 ; i < nums.size();++i){
            if(nums[i] != temp[i])
                break;
            index++;
        }
        for(int j = nums.size()-1;j > index;--j){
            if(nums[j] != temp[j])
                break;
            cnt++;
        }
        return nums.size()-index-cnt;
    }
};