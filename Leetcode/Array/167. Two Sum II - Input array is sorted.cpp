class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        if(numbers.size() < 2)
            return res;
        unordered_map<int,int>myhash;
        for(int i = 0 ; i < numbers.size();++i){
            myhash[numbers[i]] = i;
        }
        for(int i = 0;i < numbers.size();++i){
            int res_val = target-numbers[i];
            if(myhash.find(res_val) != myhash.end()){
                int index = myhash[res_val];
                if(index == i)
                    continue;
                if(index < i){
                    res.push_back(index+1);
                    res.push_back(i+1);
                    return res;
                }
                else{
                    res.push_back(i+1);
                    res.push_back(index+1);
                    return res;
                }
            }
        }
        return res;
    }
};