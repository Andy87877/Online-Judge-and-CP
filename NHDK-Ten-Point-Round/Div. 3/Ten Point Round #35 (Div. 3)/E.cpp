#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s1, s2, s3;
    cin >> s1 >> s2;
    ll ans1 = 0, ans2 = 0;
    
    for (ll i = 0; i < s1.size(); i++) {
        s3 += s1[i];
    }
    for (ll i = 0; i < s2.size(); i++) {
        s3 += s2[i];
    }
    
    for (ll i = 0; i < s3.size(); i++) {
        if (i%2 == 0) {
            ans1 += int(s3[i])-48;
        } else {
            ans2 += int(s3[i])-48;
        }
    }

    cout << s3 << "\n";
    if ((ans1-ans2)%11 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}