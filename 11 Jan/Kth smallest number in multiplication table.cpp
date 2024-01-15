class Solution {
public:
    int findKthNumber(int m, int n, int k) {
       int l = 1,r = m*n,ans = r;
        while(l<=r){
            int mid = (l+r)/2,cnt = 0;
            for(int i=1;i<=m;i++){
                cnt += min(n,mid/i);
            }
            if(cnt>=k){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};
