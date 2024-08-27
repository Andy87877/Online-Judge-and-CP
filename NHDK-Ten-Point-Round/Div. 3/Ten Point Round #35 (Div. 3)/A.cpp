#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,p,c, ans = 0, buy = 0, getnum = 0, ex;
    cin >> n >> p >> c;
    ex = n + n/2;
    
    getnum = (c/ex)*ex + (c-((c/ex)*ex));
    buy = (c/ex)*n + (c-((c/ex)*ex));

    cout << buy*p << endl;
}