class Solution {
public:
    int trap(vector<int>& nums) {
        int assumewater=0;
        int maxwater=0;
        int currmaxvalue=0;
        int i=0;
        int index=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]<currmaxvalue){
                assumewater=0;
                while(i<n && nums[i]<currmaxvalue){
                    assumewater+=currmaxvalue-nums[i];
                    i++;
                }
            }
            if(i<n && nums[i]>=currmaxvalue){
                currmaxvalue=nums[i];
                index=i;
                i++;
                maxwater+=assumewater;               
            }
            
        }
        if(index<n-2 ){
            currmaxvalue=nums[n-1];
            int j=n-2;
            while(j>index){
                if(nums[j]<currmaxvalue){
                    maxwater+=currmaxvalue-nums[j];
                    j--;
                }else{
                    currmaxvalue=nums[j];
                    j--;
                }
            }
        }
        return maxwater;
    }
};
