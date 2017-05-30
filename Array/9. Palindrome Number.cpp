class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int temp = 0;
        int roix = x;
        while(x){
            temp = temp* 10+x%10;
            x /= 10;
        }
        return roix == temp;
    }
};