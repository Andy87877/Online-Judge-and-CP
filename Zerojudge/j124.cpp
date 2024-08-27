#include <bits/stdc++.h>
#define ll long long
using namespace std;

stringstream ss;

ll ans = 0, num, temp;
vector<ll> vec;
vector<ll> vec_time;
vector<ll> vec_num;


int main() {
    string str;
    getline(cin,str);
    ss << str;
    while (ss >> num) {
        vec.push_back(num);
    }

    for (ll i = 0; i < vec.size(); i++) {
        if (vec[i] != 0) {
            vec_num.push_back(vec[i]);
            vec_time.push_back(0);
        } else {
            vec_time[vec_time.size()-1]++;
            while (((vec_num[vec_num.size()-1]%2)+2 == vec_time[vec_time.size()-1]) && (vec_num.size() >= 2)) {
                temp = vec_num[vec_num.size()-1];
                vec_num.pop_back();
                vec_time.pop_back();
                ans += abs(temp-vec_num[vec_num.size()-1]);
                // cout << temp << " " << vec_num[vec_num.size()-1] << "\n";
                vec_time[vec_time.size()-1]++;
            }
        }
    }

    cout << ans << " ";
}