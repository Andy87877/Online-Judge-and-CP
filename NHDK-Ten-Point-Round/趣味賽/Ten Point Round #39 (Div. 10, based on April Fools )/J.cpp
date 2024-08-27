#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string A, B, C, D, E, F;
    
    char c;
    cin >> c;

    A = "你越派、我越愛";
    B = "happy";
    C = "幽浮也是福。";
    E = "確實";

    D = "菜就多練";

    F = "∞";


    string s[6] = {A, B, C, D, E, F};

    int num = int(c)-65;
    cout << s[num] << endl;
}