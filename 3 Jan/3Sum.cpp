class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int l, r;
        sort(nums.begin(), nums.end());
        
        set<vector<int>> s;
        vector<vector<int>> output;
        
        int n = nums.size();
        for(int i = 0; i < n; i++){
            l = i + 1;
            r = nums.size() - 1;
            
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    s.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }
                
                else if(nums[i] + nums[l] + nums[r] < 0){
                    l++;
                }
                else if(nums[i] + nums[l] + nums[r] > 0){
                    r--;
                }
            }
        }
        
        for(auto triplets : s){
            output.push_back(triplets);
        }
        
        return output;
    }
};
