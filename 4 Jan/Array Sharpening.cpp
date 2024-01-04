#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int prefixEnd = -1;
        int suffixEnd = n;

        for(int i = 0; i < n; i++){
            if(arr[i] < i){
                break;
            }

            prefixEnd = i;
        }

        for(int i = n; i >= 0; i--){
            if(arr[i] < (n - 1) - i){
                break;
            }
            suffixEnd = i;
        }

        if(suffixEnd <= prefixEnd){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
