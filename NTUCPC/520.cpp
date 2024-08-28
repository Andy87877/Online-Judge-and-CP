#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    double a,b,c;
    cin >> a >> b >> c;
    double avg = (a+b+c)/3;

    if (avg >= 90) return "A+";
    if (avg >= 85) return "A"; 
    if (avg >= 80) return "A-"; 

    if (avg >= 77) return "B+";
    if (avg >= 73) return "B"; 
    if (avg >= 70) return "B-"; 

    return "F";
}

int main() {
    Andy8787_want_AC
    cout << judge() << "\n";
}