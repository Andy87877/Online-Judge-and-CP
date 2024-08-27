#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

vector<ll> vec;

ll find_index(ll num){
    ll high = vec.size()-1, low = 0;
    
    ll mid = (high+low)/2;
    while(high > low){
        mid = (high+low)/2;
        if (vec[mid] == num) return mid;

        if (vec[mid] > num){ //小
            high = mid-1;
        } else {
            low = mid+1;
        }

        if (vec[mid+1] > num && vec[mid-1] < num) return mid;
    }

    return mid;
}

void judge(){
    char c;
    ll num;

    cin >> c >> num;

    ll index = find_index(num);
    cout << "index: " << index << "    ";
    if (c == '>') {
        if (vec[index] == num) {
            if (index != vec.size()-1){
                cout << vec[index+1];
            } else {
                cout << "QQ";
            }
        } else {
            if (index != vec.size()-1){
                cout << vec[index];
            } else {
                cout << "QQ";
            }
        }
        
    } else if (c == '<') {
        if (vec[index] == num) {
            if (index != 0){
                cout << vec[index-1];
            } else {
                cout << "QQ";
            }
        } else {
            cout << vec[index];
        }
    } else if (c == '+') {
        vec.insert(vec.begin()+index, num);
    } else { // -
        vec.erase(vec.begin()+index);
    }
}

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;

    for (ll i = 0; i < n; i++){
        ll tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());

    for (ll tttt = 0; tttt < m; tttt++){
        judge();
        
        cout << "     " << tttt << ":";
        for (auto i: vec){
            cout << i << " ";
        }
        cout << "\n";
    }
}