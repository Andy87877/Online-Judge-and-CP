#include <iostream>
using namespace std;

int main() {
    int num;
    while(cin >> num) {
        int a=1, b=1, max=1;
        bool flag = false; //true 右上到左下
        //a.b 現在
        //c.d 最多
        for (int i = 1; i < num; i++) {
            if (flag) {
                if (b >= max) {
                    flag = false;
                    max++;               
                    a = 2;
                }
                a--;
                b++;
            } else {
                if (a >= max) {
                    flag = true;
                    max++;
                    b = 2;                
                }
                b--;
                a++;
            }
        }
        cout << "TERM " << num << " IS ";
        cout << b << '/' << a << endl;
    }
}
/*
1 2 6 7
3 5 8
4 9
10
*/
