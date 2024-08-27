// https://replit.com/@andy8787main/a003-cpp#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=a004
#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        cout << (((n % 400) == 0) ? "閏年" : (((n % 4) == 0)&&((n % 100) != 0)) ? "閏年" : "平年"); 
        cout << endl;
    }
}
