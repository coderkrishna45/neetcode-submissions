class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        struct CustomCompare {
            bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
                if (a.first != b.first) {
                    return a.first < b.first;
                }
                return a.second > b.second;
            }
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> q;
        int n = nums.size();
        vector<bool> isInside(n, true);
        for (int i = 0; i < k; i++) {
            q.push({nums[i], i});
        }
        int i = 0;
        int j = k - 1;
        vector<int> result;
        while (j < n) {
            while (!q.empty() && !isInside[q.top().second]) {
                auto [value, idx] = q.top();
                q.pop();
            }
            auto [val, idx] = q.top();
            result.push_back(val);
            isInside[i] = false;
            i++;
            j++;
            if (j < n) q.push({nums[j], j});
        }
        return result;
    }
};
