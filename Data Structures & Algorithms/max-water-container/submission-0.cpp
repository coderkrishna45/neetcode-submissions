class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maximum=0;
        int currmax=0;
        int indx=0;
        int minvalue=0;
        int i=0;
        int n=heights.size();
        int j=n-1;
        while(i<j){
            //int previndx=0;
            //if(nums[i]<nums[previndx]){
//
            //}

            int minvalue=min(heights[i],heights[j]);
            int currmax=minvalue*(j-i);
            maximum=max(currmax,maximum);
            if(heights[i]>heights[j]){
                j--;
            }else{
                i++;
            }

        }
        return maximum;
    }
};
