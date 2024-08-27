// #include <bits/stdc++.h>
// #define ll long long
// #define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
// using namespace std;

// ll sovle() {
//     ll n, temp;
//     cin >> n;
//     map<ll,ll> ma;
//     for (ll i = 2; i <= n; i++) {
//         cin >> temp;
//         ma[i] = temp;
//     }

//     ll ans = n, total = 1;

//     for (ll i = 0; i <= n; i++) {
//         ans = ma[ans];
//         total++;
//         if (ma[ans] == 1) {
//             return total;
//         }
//         cout << ans << "\n";
//     }
// }

// int main() {
//     Andy8787_want_AC
//     cout << sovle() << endl;
// }