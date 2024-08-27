// https://zerojudge.tw/ShowProblem?problemid=d051
#include <iostream>
#include <iomanip> // 小數點
using namespace std;

int main() {
    double c, f;
    cin >> f;
    c = (f-32)*5/9;
    cout << fixed << setprecision(3) << c; // 小數點後3位
}
