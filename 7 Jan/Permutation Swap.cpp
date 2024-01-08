#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int res = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            res = __gcd(res, abs(x - i));
        }
        cout << res << endl;
    }
}
