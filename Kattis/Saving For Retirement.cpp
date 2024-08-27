// https://open.kattis.com/problems/savingforretirement
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    Andy8787_want_AC
    ll B, Br, Bb, A, Ab;
    cin >> B >> Br >> Bb >> A >> Ab;

    ll B_total = (Br-B)*Bb;
    ll A_total = B_total/Ab;
    A += A_total+1;
    cout << A;
}