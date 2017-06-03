class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        if(nums.size() < 2)
            return res;
        unordered_map<int,int>hashMap;
        for(int i = 0 ;i < nums.size();++i){
            hashMap[nums[i]] = i;
        }
        for(int i = 0 ; i < nums.size();++i){
            int rest_val = target-nums[i];
            if(hashMap.find(rest_val) != hashMap.end()){
                int index = hashMap[rest_val];
                if(index == i)
                    continue;
                if(index < i){
                    res.push_back(index);
                    res.push_back(i);
                    return res;
                }
                else{
                    res.push_back(i);
                    res.push_back(index);
                    return res;
                }
            }
        }
    }
};