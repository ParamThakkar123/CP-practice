#include <bits/stdc++.h>
using namespace std;

int main(){
    long long i, m, n, mrk[200];
    string s;

    while(cin >> n >> s){
        long long m = n, cnt = 0;
        memset(mrk, 0, sizeof(mrk));

        vector<int> v;
        for(i = 0; i < s.size(); i++){
            if(mrk[s[i]] == 0){
                v.push_back(i);
                mrk[s[i]] = 1;
            }
        }

        if(n == 1){
            cout << "YES\n" << s << endl;
        }

        else if(v.size() >= n){
            cout << "YES\n" << s[0];
            long long j = 1;
            for(i = 1; i < s.size(); i++){
                if(v[j] == i && n > 1){
                    cout << "\n";
                    n--;
                    j++;
                }
                cout << s[i];
            }

            cout << "\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
