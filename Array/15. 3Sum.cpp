class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        if(nums.size() < 3)
            return res;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-2;++i){
            int j = i+1;
            int k = nums.size()-1;
            while(j < k){
                vector<int>cur;
                if(nums[i]+nums[j]+nums[k] == 0){
                    cur.push_back(nums[i]);
                    cur.push_back(nums[j]);
                    cur.push_back(nums[k]);
                    res.push_back(cur);
                    j++;
                    k--;
                    while(j < k && nums[k]== nums[k+1])
                        --k;
                    while(j < k && nums[j] == nums[j-1])
                        ++j;
                }
                else if(nums[i]+nums[j]+nums[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
             while(i < nums.size()-3 && nums[i] == nums[i+1])
                ++i;
        }
        return res;
    }
};