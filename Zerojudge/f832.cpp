// https://zerojudge.tw/ShowProblem?problemid=f832
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m, temp, ans = 0;
vector<ll> w, c;


int main() {
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        w.push_back(temp);
    }
    for (ll i = 0; i < m; i++) {
        cin >> temp;
        c.push_back(temp);
    }

    sort(w.begin(), w.end());
    sort(c.begin(), c.end());
    
    while (w.size() != 0 && c.size() != 0) {
        if (w[w.size()-1] <= c[c.size()-1]) {
            ans += w[w.size()-1];
            c.pop_back();
        }
        w.pop_back();
    }

    cout << ans << "\n";
}