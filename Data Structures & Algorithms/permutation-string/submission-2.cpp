class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>first;
        unordered_map<char,int>second;

        for(int j=0;j<s1.size();j++){
            first[s1[j]]++;
        }

        int index=0;
        int count=0;

        for(int i=0;i<s2.size();){
            while(count<s1.size() && i<s2.size()){
                second[s2[i]]++;
                count++;
                i++;
            }

            if(first==second) return true;

            second[s2[index]]--;
            if(second[s2[index]]==0){
                second.erase(s2[index]);
            }
            index++;

            count--;

        }
        return false;
    }
};
