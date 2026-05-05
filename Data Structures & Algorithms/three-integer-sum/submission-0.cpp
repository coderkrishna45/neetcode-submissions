class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            int a = nums[i];
            int need = -a;
            int j = i + 1, k = n - 1;

            while (j < k) {
                int value = nums[j] + nums[k];
                if (value == need) {
                    vector<int> ans = {nums[i], nums[j], nums[k]};
                    result.insert(ans);
                    j++;
                    k--;
                } else if (value < need) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        vector<vector<int>> result1(result.begin(), result.end());
        return result1;
    }
};
