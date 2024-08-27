// https://zerojudge.tw/ShowProblem?problemid=o076
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int n;
    cin >> n;

    int h[n];
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        
        int tmp = 1;
        for (int j = i+1; j < n; j++){
            if (h[j-1] <= h[j]) break;
            tmp++;
        }
        ans = max(tmp, ans);
    }
    cout << ans << "\n";
}