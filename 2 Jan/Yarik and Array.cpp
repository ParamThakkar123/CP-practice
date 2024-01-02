#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> arr(n);
 
        for(auto &x : arr){
            cin >> x;
        }
 
        int ans = arr[0];
        int maxi = 0;
 
        for(int i = 0; i < n; i++){
            if(abs(arr[i] % 2) == abs(arr[i - 1] % 2)){
                maxi = 0;
            }
 
            maxi += arr[i];
            ans = max(ans, maxi);
            if(maxi < 0){
                maxi = 0;
            }
        }
 
        cout << ans << endl;
    }
}
