class Solution {
public:
    bool isValid(string s) {
        stack<char>store;
        int height=0;
          for(int i=0;i<s.size();i++){
            if(s[i]=='(' ||s[i]=='{' || s[i]=='['){
                store.push(s[i]);
            }else{
               char prev;
                if (!store.empty()) {
                    prev = store.top();
                    store.pop();
                } else {
                    prev = '/'; 
                }
                if((prev=='(' && s[i]==')') || (prev=='[' && s[i]==']') || (prev=='{' && s[i]=='}')){
                    continue;
                }else{
                    return false;
                }
            }
          }
          return store.empty();
    }
};
