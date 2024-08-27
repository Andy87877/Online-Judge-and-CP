// https://zerojudge.tw/ShowProblem?problemid=d984
#include <iostream>
using namespace std;

long long a,b,c;
void judge(long long a,long long b,long long c) {
    if ((a > b) && (a > c)) { // a max
        if ((b+c) > a) {
            if (b > c) {
                cout << "B";
            } else {
                cout << "C";
            }
        } else {
            cout << "A";
        }
    } else if ((b > a) && (b > c)) { // b max
        if ((a+c) > b) {
            if (a > c) {
                cout << "A";
            } else {
                cout << "C";
            }
        } else {
            cout << "B";
        }
    } else { // c max
        if ((a+b) > c) {
            if (a > b) {
                cout << "A";
            } else {
                cout << "B";
            }
        } else {
            cout << "C";
        }
    }
    cout << endl;
}

int main() {
    while(cin >> a >> b >> c) {
        judge(a,b,c);
    }
}//
