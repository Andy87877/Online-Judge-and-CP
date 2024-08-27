#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sovle() {
    ll a,b,d,tempd;
    bool flag = true;
    double x,y, r;
    cin >> a >> b >> d;
    r = pow((a*a+b*b),0.5);
    tempd = d;

    if (d == 360) {
        x = a;
        y = b;
        flag = false;
    } else if (d >= 270) d-=270;
    else if (d >= 180) d-=180; 
    else if (d >= 90) d-=90;

    if (flag) {
        x = cos(d)*r;
        y = sin(d)*r;
    }
    if (tempd >= 270) x*=-1;
    else if (tempd >= 180) {y*=-1; x*= -1;}
    else if (tempd >= 90) y*=-1;
    cout << x << " " << y << "\n";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    sovle();
}