#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

bool Judge(ll n){
    ll i = 3;
    bool isPrime = true;

    if(n==2 || n == 3) return true;
    if(n%2 == 0) return false;

    while (i <= n-1 && isPrime){
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i+=2;
    }
    return isPrime;
}
int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    for(ll i = 2; i < n; i++){
        if (n%i == 0){
            if (Judge(i)){
                cout << i << " " << n/i;
                break;
            }
        }
    }

}