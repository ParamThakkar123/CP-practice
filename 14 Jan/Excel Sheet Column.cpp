class Solution {
public:
    int titleToNumber(string columnTitle) {
      int index = 0;
      int ans = 0;
        
      for(int i = columnTitle.size() - 1; i >= 0; i--){
          ans += pow(26, index) * (columnTitle[i] - 'A' + 1);
          index++;
      }
        
        return ans;
    }
};
