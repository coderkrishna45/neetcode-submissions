class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>store(26,0);
        for(char c:s){
            store[c-'a']++;
        }
        for(char d:t){
            store[d-'a']--;
        }
        for(int i=0;i<26;i++){
            if(store[i]==0){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
