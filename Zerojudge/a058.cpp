// https://replit.com/@andy8787main/a058-cpp#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=a058
#include <iostream>
using namespace std;

int main() {
    int times, num, a=0, b=0, c=0;//k,k+1,k+2
    cin >> times;
    for (int i = 0; i < times; i++) {
        cin >> num;
        (((num%3)==0)?a++:((num%3)==1)?b++:c++);
    }
    cout << a << " " << b << " " << c;
} 
