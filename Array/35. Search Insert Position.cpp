class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()){
            nums.insert(nums.begin(),target);
            return 0;
        }
        for(int i = 0; i < nums.size();++i){
            if(nums[i] >= target){
                nums.insert(nums.begin()+i,target);
                return i;
            }
        }
        nums.insert(nums.begin()+nums.size(),target);
        return nums.size()-1;
    }
};