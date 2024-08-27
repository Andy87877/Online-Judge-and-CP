// https://zerojudge.tw/ShowProblem?problemid=g275
#include <iostream>
using namespace std;

void judge() {
    int list1[7], list2[7];
    bool flag = true;

    for (int i = 0; i < 7; i++) {
        cin >> list1[i];
    }
    for (int i = 0; i < 7; i++) {
        cin >> list2[i];
    }

    //A
    if ((list1[1] == list1[3]) || (list1[1] != list1[5]) || (list2[1] == list2[3]) || (list2[1] != list2[5])) {
        cout << "A";
        flag = false;
    }
    //B
    if ((list1[6] == 0) || (list2[6] == 1)) {
        cout << "B";
        flag = false;
    }
    //C
    if ((list1[1] == list2[1])||(list1[3] == list2[3])||(list1[5] == list2[5])) {
        cout << "C";
        flag = false;
    }
    if (flag) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    int times;
    cin >> times;
    for (int time = 0; time < times; time++) {
        judge();
    }
}
