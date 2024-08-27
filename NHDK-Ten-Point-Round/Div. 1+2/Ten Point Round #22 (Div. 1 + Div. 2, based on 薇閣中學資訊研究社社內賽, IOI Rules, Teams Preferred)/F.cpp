#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,ans = 0; //n間m種
ll i,j,k;
bool flag;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    ll c[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> c[i][j];
            c[i][j]%=2
        }
        for (j = 0; j < m; j++) {

        }
    }
    cout << ans;
}