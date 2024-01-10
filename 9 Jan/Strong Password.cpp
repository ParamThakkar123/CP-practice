#include <bits/stdc++.h>
using namespace std;

#define loop(i, a, b)       for (int i = a; i < b; i++)
#define loopr(i, a, b)      for (int i = b; i < a; i--)
#define nl                  ("\n")

void solve()
{

    string s;cin>>s;

    map<char,set<int>> mp;
    loop(i,0,s.length()){
        mp[s[i]].insert(i);
    }
    int m;cin>>m;

    string l;cin>>l;
    string r;cin>>r;


        int start=-1;
        loop(i,0,m){
            int range=start+1;
        for(char c=l[i];c<=r[i];c++){
                int ind=s.find(c,range);
                if(ind==-1){
                    cout<<"YES"<<nl;
                    return;
                }
                start=max(ind,start);
        }
    }

    cout<<"NO"<<nl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}
