#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n,a,b,c,ans = 0,temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a = i;
            b = j;
            c = n-i-j;
            temp = 2022+abs(b-c)+a*b+b*c+c*c-abs(b*b-a*a);
            if (ans < temp) {
                ans = temp;
            }
        }
    }
    cout << ans << endl;
}