class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>result(temperatures.size(), 0);
        int n = temperatures.size();
        int j=n;
        for (int j = n - 1; j >= 0; j--) {
            while (!s.empty() && s.top().first <= temperatures[j]) {
                s.pop();
            }
            if (!s.empty()) {
                result[j] = s.top().second - j;
            }
            s.push({temperatures[j], j});
        }
        
        return result;
    }
};
