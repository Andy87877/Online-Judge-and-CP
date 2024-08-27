// use stringstream
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
        
    string str;
    getline(cin, str);
    string arr[100];

    stringstream ss(str);
    ll i = 0;
    while(getline(ss, arr[i], ' ')) i++;

    ll n;
    cin >> n;
    cout << arr[i-n];
}