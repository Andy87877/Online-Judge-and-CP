#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    while(true){
        cin >> n;
        if (n == 0) return 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (n-j > i+1){
                    cout << "_";
                } else {
                    cout << "+";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
}