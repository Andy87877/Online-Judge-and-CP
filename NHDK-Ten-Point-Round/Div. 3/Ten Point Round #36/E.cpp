#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll q;
    cin >> q;
    if (q <= 10) {
        ll ans = 1;
 
        for (ll i = 0; i < q; i++) {
            string s;
            ll num;
            cin >> s;
            if (s == "Rp") {
                cin >> num;
                ans /= 10;
                ans *= 10;
                ans += num;
            }
            if (s == "LS") {
                ans *= 10;
            }
            if (s == "RS"){
                ans /= 10;
            }
    
            // cout << ans << endl;
        }
    
        cout << ans << endl;
    } else {
        string ans = "1";
        string s;
        char num;

        while (q--) {
            cin >> s;
            if (s == "Rp") {
                cin >> num;
                ans[ans.size()-1] = num;
            } else if (s == "LS") {
                ans += "0";
            } else {
                if (ans.size() == 1){
                    ans = "0";
                } else {
                    ans.pop_back();
                }
            }
        }

        cout << ans << endl;
    }
    
}