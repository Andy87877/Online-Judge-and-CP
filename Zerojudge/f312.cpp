// https://zerojudge.tw/ShowProblem?problemid=f312
#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll a,b,c;
    ll d,e,f;
    ll n;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    cin >> n;
    ll ans = (c + d*(n)*(n)+e*(n)+f), temp;
    for (int i = 1; i <= n; i++) {
        temp = a*i*i+b*i+c;
        temp += d*(n-i)*(n-i)+e*(n-i)+f;
        if (temp > ans) {
            ans = temp;
        }
    }
    cout << ans << endl;
}
