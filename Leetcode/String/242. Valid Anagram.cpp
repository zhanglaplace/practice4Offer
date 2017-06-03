class Solution {
public:
    bool isAnagram(string s, string t) {
        int alpha[26]={0};
        for(int i = 0 ; i < s.size();++i){
            alpha[s[i]-'a']++;
        }
        for(int j = 0 ; j < t.size();++j){
            alpha[t[j]-'a']--;
        }
        for(int i = 0 ;i < 26;++i){
            if(alpha[i] != 0)
                return false;
        }
        return true;
    }
};