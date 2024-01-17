class Solution {
public:
    
    int eggDrop(int k, int n, vector<vector<int>> &mem){
        if(k == 1) return n;
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(mem[k][n] != -1) return mem[k][n];
        int mini = INT_MAX;
        
        int i = 1;
        int j = n;
        
        while(i <= j){
            int mid = (i + j) / 2;
            int down = mem[k - 1][mid - 1];
            int up = mem[k][n - mid];
            
            if(down == -1){
                down = eggDrop(k - 1, mid - 1, mem);
                mem[k - 1][mid - 1] = down;
            }
            
            if(up == -1){
                up = eggDrop(k, n-mid, mem);
                mem[k][n-mid] = up;
            }
            
            mini = min(mini, 1 + max(up, down));
            if(up > down){
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        
        return mem[k][n] = mini;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>> mem(k + 1, vector<int> (n + 1, -1));
        return eggDrop(k, n, mem);
    }
};
