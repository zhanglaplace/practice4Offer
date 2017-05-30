class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<= 2)
            return -1;
        int ret = 0;
        int distance = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-2;++i){
            int j = i +1;
            int k = nums.size()-1;
            while(j < k){
                int temp_val = nums[i]+nums[j]+nums[k];
                int temp_distance;
                if(temp_val == target){
                    ret = temp_val;
                    return ret;
                }
                else if(temp_val < target){
                    temp_distance = target - temp_val;
                    if(temp_distance < distance){
                        distance = temp_distance;
                        ret = temp_val;
                    }
                    ++j;
                }
                else{
                    temp_distance = temp_val - target;
                    if(temp_distance < distance){
                        distance = temp_distance ;
                        ret = temp_val;
                    }
                    --k;
                }
            }
        }
        return ret;
    }
};