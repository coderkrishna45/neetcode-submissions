class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>store;
        for(int i=0;i<strs.size();i++){
            string curr=strs[i];
            sort(curr.begin(),curr.end());
            store[curr].push_back(strs[i]);
        }
        vector<vector<string>>result;
        for(auto &pair:store){
            result.push_back(pair.second);
        }
        return result;
    }
};
