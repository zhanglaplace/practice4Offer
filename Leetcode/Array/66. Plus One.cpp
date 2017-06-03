class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res(digits.size(),0);
        int i = digits.size()-1;
        int sum = 0;
        int one = 1;
        while(i >= 0){
            sum = one+digits[i];
            one = sum/10;
            res[i] = sum%10;
            i--;
        }
        if(one > 0){
            res.insert(res.begin(),one);
        }
        return res;
    }
};