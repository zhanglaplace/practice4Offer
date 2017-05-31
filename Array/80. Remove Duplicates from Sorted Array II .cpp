class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int index = 0 ;
        int num = 0;
        for(int i = 1 ; i < nums.size();++i){
            if(nums[index] == nums[i]){
                num++;
                if(num < 2){
                    nums[++index] = nums[i];
                }
            }
            else {
                nums[++index] = nums[i];
                num = 0;
            }
        }
        return index+1;
    }
};
