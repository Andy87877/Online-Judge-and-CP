// https://zerojudge.tw/ShowProblem?problemid=b004
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double D, L, pi, ans;
    pi = 2*acos(0);
    
    while(cin >> D >> L) {
        ans = pi*(L/2)*sqrt((L/2)*(L/2)-(D/2)*(D/2));
        printf("%.3f\n",(ans));
    }
}
