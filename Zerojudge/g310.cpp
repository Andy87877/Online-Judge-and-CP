// https://zerojudge.tw/ShowProblem?problemid=g310
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, temp, ans = 0, a = 0, b = 0;
vector<ll> x, y;

int main() {
  std::ios::sync_with_stdio(false);
  cin >> n;
  for (ll i = 0; i < n; i++) {
    cin >> temp;
    x.push_back(temp);
  }
  for (ll i = 0; i < n; i++) {
    cin >> temp;
    y.push_back(temp);
  }

  while (y.size() != b) {
    if (x[a] < y[b]) {
      ans++;
      a++;
    }
    b++;
  }
  cout << ans << "\n";
}