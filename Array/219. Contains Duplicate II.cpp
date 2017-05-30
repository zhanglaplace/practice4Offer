class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mymAP;
        for(int i = 0; i < nums.size();++i){
            if(mymAP.find(nums[i]) != mymAP.end() && mymAP[nums[i]] >= i-k)
                    return true;
            mymAP[nums[i]] = i;
        }
        return false;
    }
};