class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int start = 0 ;
        int stop = nums.size()-1;
        while(start < stop){
            if(nums[start] < nums[stop])
                return nums[start];
            int mid = start + (stop-start)/2;
            if(nums[mid] >= nums[start])
                start = mid+1;
            else if(nums[mid] < nums[start])
                stop = mid;
        }
        return nums[start];
    }
};