class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int chc[26] = {0};
        for(int i = 0 ; i < magazine.size();++i){
            chc[magazine[i]-'a']++;
        }
        for(int j = 0 ; j < ransomNote.size();++j){
            chc[ransomNote[j]-'a']--;
            if(chc[ransomNote[j]-'a'] < 0)
                return false;
        }
        return true;
    }
};