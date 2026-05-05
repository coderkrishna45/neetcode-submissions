class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";
        for (int i = 0; i < strs.size(); i++) {
            s += to_string(strs[i].length()) + "#" + strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        string result;
        vector<string> strr;
        int j = 0;
        while (j < s.size()) {
            int a = j;
            while (s[j] != '#') {
                j++;
            }
            int count = stoi(s.substr(a, j - a));
            int temp = count; 

            result = "";
            while (count > 0) {
                result += s[j + 1];
                j++;
                count--;
            }
            strr.push_back(result);
            j = j + 1;
        }
        return strr;
    }
};
