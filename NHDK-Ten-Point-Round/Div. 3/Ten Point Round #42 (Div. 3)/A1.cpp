#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n = 3;

    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++){
        cin >> b[i];
    }


    ll ans = -99999999;
    for (ll i = 1; i < pow(n, 3); i++){
        ll num = i, tmp = 2;
        vector<ll> sort_vector(n);

        bool checkA = false, checkB = false;
        while (num > 0){
            if (num % 3 == 1) checkA = true;
            if (num % 3 == 2) checkB = true;

            sort_vector[tmp] = num % 3;
            num /= 3;
            tmp--;
        }

        ll now = 0;
        if (checkA && checkB){
            for (ll i = 0; i < n; i++){
                if (sort_vector[i] == 1){
                    now += a[i];
                } else if (sort_vector[i] == 2){
                    now += b[i];
                }
            }

            ans = max(ans, now);
        }
    }

    cout << ans << "\n";
}
/*
0 都不選
1 選A
2 選B

像是3進制
27種 但是 要同時符合有1和2
0 0 0 
0 0 1
0 0 2
0 1 0
0 1 1
0 1 2
0 2 0
0 2 1
0 2 2
1 0 0
*/