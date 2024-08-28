#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void judge(){
    ll n;
    string str;
    bool flag = true;
    
    cin >> n;
    cin >> str;
    
    for (int i = 1; i < n; i++){
        if (str[i] != str[i-1]){
            printf("%d %d\n", i, i+1);
            flag = false;
            break;
        }
    }

    if (flag) printf("-1 -1\n");

    return;
}
int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;

    while (t--){
        judge();
    }
}