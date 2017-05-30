class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>myhash;
        for(int i = 0 ; i < nums.size();++i){
            myhash[nums[i]] = i;
        }
        for(int i = 0 ; i < nums.size();++i){
            if(myhash.find(i+1) == myhash.end())
                res.push_back(i+1);
        }
        return res;
    }
};