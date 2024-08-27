// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;


int main() {
    ll times;
    string str,n;
    map<string,string> ma;
    vector<string> zero;
    
    cin >> times;
    for (ll i = 0; i < times; i++){
        cin >> str >> n;
        ma[str] = n;
    }
    
    while(cin >> str){
        if (ma.find(str) == ma.end()) {
            cout << "Not found" << endl;
        } else {
            cout << str << "=" << ma[str] << "\n";
        }         
    }
}
