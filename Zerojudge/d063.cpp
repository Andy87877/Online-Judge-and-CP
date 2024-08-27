// https://replit.com/@andy8787main/d063#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=d063
#include <iostream>
using namespace std;

int judge(int n) {
    if (n == 1) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int n;
    cin >> n;

    cout << judge(n);
} 
