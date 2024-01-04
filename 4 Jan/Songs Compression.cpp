#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> arr(n);
    long long sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
        sum += arr[i].first;
    }

    sort(arr.begin(), arr.end(), [&](pair<int, int> a, pair<int, int> b){return a.first - a.second > b.first - b.second ;});

    for(int i = 0; i < n; i++){
        if(sum <= m){
            cout << i << " ";
            return 0;
        }

        sum -= arr[i].first - arr[i].second;
    }

    if(sum <= m){
        cout << n << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}
