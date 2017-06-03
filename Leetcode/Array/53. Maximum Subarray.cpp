class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = -INT_MAX, sum=0;
        for (int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            sum = max(sum,nums[i]);
            if (sum > max_sum)
                max_sum = sum;
        }
        return max_sum;
    }
};