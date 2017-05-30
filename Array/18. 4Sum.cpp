class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ret;
        if(nums.size() <= 3)
            return ret;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-3;++i){
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            for(int j = i+1; j < nums.size()-2;++j){
                if(j > i+1 && nums[j] == nums[j-1])
                    continue;
                int k = j+1;
                int z = nums.size()-1;
                while(k < z){
                    int temp_val = nums[i]+nums[j]+nums[k]+nums[z];
                    if(temp_val == target){
                        vector<int>curr;
                        curr.push_back(nums[i]);
                        curr.push_back(nums[j]);
                        curr.push_back(nums[k]);
                        curr.push_back(nums[z]);
                        ret.push_back(curr);
                        do{
                            ++k;
                        }while(k < z && nums[k] == nums[k-1]);
                        do{
                            --z;
                        } while(k < z && nums[z] == nums[z+1]);
                    }
                    else if(temp_val < target)
                        ++k;
                    else
                        --z;
                }
            }
        }
        return ret;
    }
};