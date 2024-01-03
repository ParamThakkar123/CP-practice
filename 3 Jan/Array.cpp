#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> pos;
    vector<int> neg;
    vector<int> zero;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }

        if(arr[i] < 0){
            neg.push_back(arr[i]);
        }

        if(arr[i] == 0){
            zero.push_back(arr[i]);
        }
    }

    if (pos.size() == 0) {
        for(int i = 0; i < 2; i++)
                      pos.push_back(neg.back()), neg.pop_back();
    }
    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    printf("%d", neg.size());
    for(int i = 0; i < neg.size(); i++) {
        printf(" %d",neg[i]);
    }
    printf("\n%d", pos.size());
    for(int i = 0; i < pos.size(); i++) {
        printf(" %d", pos[i]);
    }
    printf("\n%d", zero.size());
    for(int i = 0; i < zero.size(); i++) {
        printf(" %d", zero[i]);
    }
}
