class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> combined;
        for(int i=0;i<position.size();i++){
            combined.push_back({position[i],speed[i]});
        }
        sort(combined.rbegin(),combined.rend());
        int count=0;
        double maxTime = 0.0;
        for(int i=0;i<combined.size();i++){
            double timeTaken = (double)(target - combined[i].first) / combined[i].second;
            if(timeTaken>maxTime){
                count++;
                maxTime = timeTaken;
            }
        }
        return count;
    }
};
