#include <bits/stdc++.h>
#define ll long long
#define PI 3.14159265358979323846
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    double a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << int(a+b*c)%int(d) << endl;

    double ans;

    ans = a/b+c/d;
    printf("%.6f\n", ans);

    //換成弧度
    double A = a*PI/180.000, B = b*PI/180.000 ,C = c*PI/180.000, D = d*PI/180.000; 
    ans = sin(A-B)*cos(C-D);
    printf("%.6f\n", ans);

    ans = pow(abs(a*b-c*d),0.5);
    printf("%.6f\n", ans);

    ans = log10(a*b*c*d);
    printf("%.6f\n", ans);
}