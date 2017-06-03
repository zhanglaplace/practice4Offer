class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int m = INT_MIN;
        for (int i = 0; i < n; ++i){
            sum += nums[i];
            m = max(m,sum);
            if (sum < 0)
                sum = 0;
        }
        return m;
    }
};