// https://replit.com/@andy8787main/a003-cpp#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=a003
#include <iostream>
using namespace std;

int main() {
    int M, D, S;
    cin >> M >> D;
    S = (M*2+D)%3;
    cout << ((S == 0) ? "普通" : ( (S == 1) ? "吉" : "大吉"));
} 
