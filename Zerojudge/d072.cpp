// https://replit.com/@andy8787main/d072-cpp#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=d072

#include <iostream>
using namespace std;

int main() {
    int times;
    cin >> times;
    
    for (int i = 0; i < times; i++) {
        int year;
        cin >> year;

        cout << "Case " << i+1 << ": "<<(((year%400)==0) ? "a leap year":(((year%4)==0) && (year%100)!=0)?"a leap year":"a normal year") << endl;
    }
} 
