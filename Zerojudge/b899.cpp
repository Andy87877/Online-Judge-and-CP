// https://zerojudge.tw/ShowProblem?problemid=b899
#include <iostream>
using namespace std;

int main() {
    int x[3], y[3], d[3], ansx, ansy;
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    d[0] = (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]);
    d[1] = (x[2]-x[1])*(x[2]-x[1]) + (y[2]-y[1])*(y[2]-y[1]);
    d[2] = (x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]);
    if ((d[0] > d[1]) && (d[0] > d[2])) {
        // 0 1
        ansx = x[0]+x[1]-x[2];
        ansy = y[0]+y[1]-y[2];
    } else if ((d[1] > d[0]) && (d[1] > d[2])) {
        // 1 2
        ansx = x[1]+x[2]-x[0];
        ansy = y[1]+y[2]-y[0];
    } else {
        // 0 2
        ansx = x[0]+x[2]-x[1];
        ansy = y[0]+y[2]-y[1];
    }
    cout << ansx << " " << ansy << endl;
}
