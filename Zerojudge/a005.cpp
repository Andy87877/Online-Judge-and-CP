// https://replit.com/@andy8787main/a005-cpp#main.cpp
// https://zerojudge.tw/ShowProblem?problemid=a005
#include <iostream>
using namespace std;
int main() {
    int times;
    cin >> times;
    for (int t = 0; t < times; t++) {
        int arr[5];
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
        }

        if ((arr[2]-arr[1]) == (arr[1]-arr[0])) {
            arr[4] = arr[3]+(arr[2]-arr[1]);
        } else {
            arr[4] = arr[3]*(arr[2]/arr[1]);
        }

        for (auto i:arr){
            cout << i << " ";
        }
        cout << endl;
    }
} 
