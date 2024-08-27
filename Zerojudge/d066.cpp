// https://replit.com/@andy8787main/d066-cpp#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=d066
#include <iostream>
using namespace std;

int main() {
    int h, m, time;
    cin >> h >> m;
    time = h*60+m;
    cout << ((time < 450) ? "Off School" : (time >= 1020) ? "Off School" : "At School");
} 
