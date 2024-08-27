#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n, total = 0, num;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> num;
        total += num*i;
    }
    cout << total << endl;
}