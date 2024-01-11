#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long int n, h;
        cin >> n >> h;

        vector<long long> arr(n);
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long int l = 1, r = 1e18;

        while(l <= r){
           long long int mid = l + ((r - l) / 2);
           long long int sum = mid;
           for(int i = 0; i < n - 1; i++){
            sum += min(mid, arr[i + 1] - arr[i]);
           }
           if(sum < h){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        cout << r + 1 << endl;
    }
}
