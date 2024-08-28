#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string str;
    ll A = 0, B = 0, ans;

    cin >> str;
    for (int i = 0; i < str.size(); i++){
        if (i%2){
            A += int(str[i])-int('0');
        } else {
            B += int(str[i])-int('0');
        }
    }
    ans = abs(A-B);
    cout << ans << "\n";
}