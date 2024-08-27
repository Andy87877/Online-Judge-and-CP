#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    vector<ll> tree[n+1];
    ll father[n+1];
    memset(father, -1, sizeof(father));
    for (ll i = 1; i <= n; i++) {
        ll k;
        cin >> k;

        ll tmp;
        vector<ll> vec;
        for (ll j = 0; j < k; j++) {
            cin >> tmp;
            father[tmp] = i;
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end());
        tree[i] = vec;
    }

    string str;
    cin >> str;
    ll now = 1;
    for (ll i = 1; i <= n; i++) {
        if (father[i] == -1) {
            now = i;
            break;
        }
    }

    for (ll times = 0; times < str.size(); times++) {
        // cout << times << ":" << now << endl;
        if(str[times] == 'C') {
            ll true_num = 0;
            for (ll times1 = times+1; times1 < str.size(); times1++) {
                if (int(str[times1]) >= int('0') && int(str[times1]) <= int('9')) {
                    true_num*=10;
                    true_num += (int(str[times1])-48);
                    times++;
                } else {
                    break;
                }
            }
            if (true_num == 0 || true_num > tree[now].size()) {
                // cout << "ERROR_C:";
                // cout << true_num << endl;
                cout << now << endl;
                return 0;
            }
            now = tree[now][true_num-1];
        }

        //找爸
        if (str[times] == 'P') {
            if (father[now] == -1) {
                // cout << "ERROR_P:";
                cout << now << endl;
                return 0;
            }
            now = father[now];
        }

        //找大
        if (str[times] == 'R') {
            if (father[now] == -1) {
                // cout << "ERROR_R:";
                cout << now << endl;
                return 0;
            }
            ll FFather = father[now];

            for (ll i = 0; i < tree[FFather].size(); i++) {
                if (tree[FFather][i] == now) {
                    if (i != tree[FFather].size()-1) {
                        now = tree[FFather][i+1];
                        break;
                    } else {
                        // cout << i;
                        // cout << "ERROR_1R:";
                        cout << now << endl;
                        return 0;
                    }
                }
            }
        }
        //找小
        if (str[times] == 'L') {
            if (father[now] == -1) {
                // cout << "ERROR_L:";
                cout << now << endl;
                return 0;
            }
            ll FFather = father[now];

            for (ll i = 0; i < tree[FFather].size(); i++) {
                if (tree[FFather][i] == now) {
                    if (i != 0) {
                        now = tree[FFather][i-1];
                        break;
                    } else {
                        // cout << "ERROR_1L:";
                        cout << now << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << now << endl;
}