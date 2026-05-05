class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        string curr="";
        for(int i=0;i<=j;i++){
            if(isalnum(s[i])){
                curr.push_back(tolower(s[i]));
            }else{
                continue;
            }
        }
            int a=curr.size()-1;
        while(i<a){
            if(curr[i]!=curr[a]){
                return false;
            } 
            i++;
            a--;
            
        }
        return true;
    }
};
