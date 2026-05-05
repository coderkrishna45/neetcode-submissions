class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int value=nums[i]+nums[j];
            if(value<target){
                i++;
            }else if(value==target){
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }else if(value>target){
                j--;
            }
        }
        return result;
    }
};
