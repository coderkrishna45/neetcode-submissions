class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>store;
        int indices=0;
        int i=0;
        int n=s.size();
        int count=0;
        int ans=0;
        while(i<n){
            if(store.size()==i-indices){
                store[s[i]]++;
                i++;
            }else{
                count=store.size();
                ans=max(count,ans);
                while(store.size()!=i-indices){
                    store[s[indices]]--;
                    if(store[s[indices]]==0){
                        store.erase(s[indices]);
                    }
                    indices++;
                }
            }
            
        }
         ans = max(ans, (int)store.size());
        return ans;

    }
};
