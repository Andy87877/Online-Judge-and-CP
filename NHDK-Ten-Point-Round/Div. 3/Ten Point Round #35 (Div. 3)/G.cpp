#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s,t;
    cin >> s;
    cin >> t;

    vector<string> ans;
    string tmp;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == t[0]) {
            bool flag = true;
            for (ll j = 0; j < t.size(); j++) {
                if (s[i+j] != t[j]) {
                    flag = false;
                    tmp += s[i];
                    break;
                }
                if (i+j >= s.size()) {
                    flag = false;
                    tmp += s[i];
                    break;
                }
            }
            if (flag) {
                i += t.size()-1;
                if (tmp != "") ans.push_back(tmp);
                // cout << "fjdkfhlgajkgfl" << "\n";
                tmp = "";
            }
        } else {
            tmp += s[i];
        }
    }

    if (tmp != "") ans.push_back(tmp);
    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }
}