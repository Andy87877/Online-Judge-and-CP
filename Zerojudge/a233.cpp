// https://zerojudge.tw/ShowProblem?problemid=a233
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
int main() {
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}