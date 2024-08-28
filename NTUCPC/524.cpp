#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int judge(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a == 1){ // 天氣好
        if (b == 0) return 4;
        if (c <= 2) return 1;
        if (c <= 4) return 2; 
        return 3;
    } else { // 天氣差
        if (b == 0) return 8;
        if (c <= 2) return 5;
        if (c <= 4) return 6; 
        return 7;
    }
}

int main() {
    Andy8787_want_AC
    cout << judge() << "\n";
}