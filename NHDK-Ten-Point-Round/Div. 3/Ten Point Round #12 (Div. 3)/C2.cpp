#include <iostream>
#include <string>
#include <sstream>
#define ll long long
using namespace std;

int main() {
    stringstream ss;
    string a,b;
    ll ans;
    cin >> a >> b;
    ss << a+b;
    ss >> ans;
    
    ans *= 1234;
    cout << ans;
}
