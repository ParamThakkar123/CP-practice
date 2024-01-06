class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int f = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] > nums[i]){
                if(f == 1){
                    return false;
                }
                
                f++;
                if(i < 2 || nums[i-2] <= nums[i]){
                    nums[i-1] = nums[i];
                }
                
                else{
                    nums[i] = nums[i-1];
                }
            }
        }
        
        return true;
    }
};
