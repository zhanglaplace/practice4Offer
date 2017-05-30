class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        if(nums.size() < 1)
            return vector<int>({-1,-1});
        if(nums.size() == 1)
        {
            if(target == nums[0])
                 return vector<int>({0,0});
            return vector<int>({-1,-1});
        }
           
        int start = 0;
        int stop = nums.size()-1;
        while(start <= stop){
            int mid = start + (stop-start)/2;
            if(nums[mid] >= target)
                stop = mid-1;
            else
                start = mid +1;
        }
        if(start < nums.size() && nums[start] == target)
            v.push_back(start);
        else
            return vector<int>({-1,-1});
        start = start;
        stop = nums.size()-1;
        while(start <= stop){
            int mid = start+(stop-start)/2;
            if(nums[mid] <= target)
                start = mid+1;
            else
                stop = mid-1;
        }
        v.push_back(stop);
        return v;
    }
};