// https://replit.com/@andy8787main/a053-cpp-1#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=a053
#include <iostream>
using namespace std;

int judge(int num) {
    if (num >= 40) {
        return 100;
    } else if (num > 20) {
        return 80+num-20;
    } else if (num > 10) {
        return 60+(num-10)*2;
    } else {
        return num*6;
    }
}

int main() {
    int num;
    while(cin >> num) {
        cout << judge(num) << endl;
    }
} 



