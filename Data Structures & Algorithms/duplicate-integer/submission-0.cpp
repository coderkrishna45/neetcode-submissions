class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for (const auto& pair : count) {
            if(pair.second>1){
                return true;
            }else{
               continue;
            }
        }
        return false;
    }
};