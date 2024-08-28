#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    vector<int> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    int total = 0;
    bool flag = true;
    for (int i = 0; i < 3; i++){
        if (vec[i] < 40) return "N";
        if (vec[i] >= 90) flag = false;
        total += vec[i];
    }    

    if (total < 180 || flag) return "N";

    return "Y";
}

int main() {
    Andy8787_want_AC
    cout << judge() << "\n";
}