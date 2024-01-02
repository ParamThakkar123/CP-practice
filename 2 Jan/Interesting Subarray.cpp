#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        
        vector<long long> arr(n);
        for(auto &x : arr) cin >> x;
        
        sort(arr.begin(), arr.end());
        
        long long maxi = max(arr[n-1]*arr[n-1], arr[0]*arr[0]);
        long long mini = min({arr[0]*arr[0], arr[0]*arr[n-1],arr[n-1]*arr[n-1]});
        
        cout << mini << " " << maxi << endl;
    }
}
