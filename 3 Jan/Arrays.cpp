#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int k, l;
    cin >> k >> l;

    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    if(a[k - 1] < b[m - l]) cout << "YES" << endl;
    else cout << "NO" << endl;
}
