#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    
    ll arr[n+1];
    memset(arr, 0, sizeof(arr));
    arr[0] = 1;

    ll num;
    for (int i = 0; i < n-1; i++){
        cin >> num;
        arr[num] = 1;
    }

    for (int i = 1; i <= n; i++){
        if (arr[i] == 0){
            cout << i << "\n";
            break;
        }
    }
}