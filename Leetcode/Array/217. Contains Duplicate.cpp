class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>temp(nums.begin(),nums.end());
        return nums.size() > temp.size();
    }
};