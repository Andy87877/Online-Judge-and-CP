#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int h1,m1, h2,m2, m;
        cin >> h1 >> m1 >> h2 >> m2 >> m;

        if (h1*60+m1+m <= h2*60+m2){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}