#include <bits/stdc++.h>
using namespace std;

int total = 0;
bool ok = false;
int ans[3] = {0,0,0}; // 存放的價值
int n;
int a[16];
int mx = -1;

void DFS(int index) {
    if (index == n) { // 全部用完
        if (ans[0] == ans[1] && ans[1] == ans[2]) { 
            ok = true;
        }
        return;
    }

    for (int i = 0; i < 3; i++) {
        if (ans[i]+a[index] <= total/3) {
            ans[i] += a[index];
            DFS(index+1);
            ans[i] -= a[index];
        }
    }
}

string print() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
        mx = max(mx, a[i]);
    }
    if (total%3) return "NO";
    if (mx > total/3) return "NO";

    DFS(0);
    if (ok) return "YES";
    return "NO";
}

int main() {
    cout << print() << "\n";
}