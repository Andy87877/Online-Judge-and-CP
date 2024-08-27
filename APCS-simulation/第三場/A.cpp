#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    cin >> s;

    bool flag = false;
    ll ans = 0;

    for (ll i = 0; i < s.length()-2; i++) {
        if (s[i] == 'A' && s[i+1] == 'U' && s[i+2] == 'G'){
            // cout << s[i] << s[i+1] << s[i+2] << " ";
            flag = true;
            ans++;
            i+=2;
        } else {
            if (s[i] == 'U'){
                if (s[i+1] == 'A'){
                    if (s[i+2] == 'A' || s[i+2] == 'G'){
                        flag = false;
                        break;
                    }
                }
                if (s[i+1] == 'G' && s[i+2] == 'A') {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                ans++;
                // cout << s[i] << s[i+1] << s[i+2] << " ";
                i+=2;
            }
        }

    }
    
    cout << ans << "\n";
}