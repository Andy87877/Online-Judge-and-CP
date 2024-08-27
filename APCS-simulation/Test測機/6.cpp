#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string a,b, ans;
    int tmp, check = 0;
    cin >> a;
    cin >> b;
    
    if (a.length() < b.length()) {
        swap(a,b);
    }
    int haha = (a.length()-b.length());
    ans = a;

    for (ll i = b.length()-1; i >= 0; i--) {
        tmp = (int(a[i+haha])+int(b[i])-48*2)+check;
        // cout << tmp << endl;
        if (tmp >= 10) {
            check = 1;
        } else {
            check = 0;
        }
        ans[i+haha] = char((tmp%10)+48);
    }
    if(check) cout << 1;
    cout << ans << endl;
}