// https://zerojudge.tw/ShowProblem?problemid=d732
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, temp;
ll a[100001];

ll solve(ll temp) {
    ll high = n, low = -1, mid;
    while (high-low > 1) {
        mid = (high+low)/2;
        if (a[mid] == temp) {
            return mid+1;
        } else if (a[mid] > temp) {
            high = mid;
        } else {
            low = mid;
        }
    }

    return 0;
}

int main() {
  cin >> n >> k;
  
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (ll time = 0; time < k; time++) {
      cin >> temp;
      cout << solve(temp) << "\n";
  }
}