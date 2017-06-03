class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1)
            return false;
        int res = 1;
        for(int i = 2;i <= sqrt(num);++i){
            if(num % i == 0){
                res = res+ i + num/i;
            }
        }
        if((int)sqrt(num)*(int)sqrt(num) == num)
            res -= sqrt(num);
        return res == num;
    }
};