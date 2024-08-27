// https://hackmd.io/@sa072686/cp/%2FaCmrox62TyKBuGzqdZ0e6g#%E6%95%B8%E5%AD%97%E5%88%86%E6%AE%B5%E9%A1%AF%E7%A4%BA
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string temp = "";
    for (int i = str.size()-1; i >= 0; i--) {
        temp += str[i];
    }

    string temp2 = "";
    for (int i = 0; i < temp.size(); i++) {
        temp2 += temp[i];
        if ((((i+1)%3) == 0) && (i != temp.size()-1)) {
            temp2 += ",";
        }
    }
    
    for (int i = temp2.size()-1; i >= 0; i--) {
        cout << temp2[i];
    }
}