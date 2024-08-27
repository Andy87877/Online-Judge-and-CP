#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    Andy8787_want_AC
    ll n,k,t;
    cin >> n >> k >> t;
    
    map<pair<ll,ll>,pair<ll,ll>> ma;
    map<pair<ll,ll>,ll> run_before;

    queue<pair<pair<ll,ll>,pair<ll,ll>>> qu;
    
    for (ll i = 1; i < k+1; i++){
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--, y1--, x2--, y2--;
        ma[{x1,y1}] = {x2,y2};
        ma[{x2,y2}] = {x1,y1};
    }

    ll X = 0, Y = 0, blood = t, time = 0;
    pair<ll,ll> X_Y = {X,Y};
    pair<ll,ll> blood_time = {blood,time};
    qu.push({X_Y, blood_time});

    while(true){
        pair<pair<ll,ll>,pair<ll,ll>> now = qu.front();
        qu.pop();

        X_Y = now.first;
        X = X_Y.first;
        Y = X_Y.second;
        blood_time = now.second;
        blood = blood_time.first;
        time = blood_time.second;

        // gg
        if(X == n-1 && Y == n-1){
            cout << time << "\n";
            break;
        }

        if (run_before[X_Y] != 0 && run_before[X_Y] >= blood){//走過
        } else {
            run_before[X_Y] = blood;
            
            // 隧道
            if (ma.count(X_Y) >= 1){
                if (blood >= 2){
                    qu.push({{ma[X_Y].first, ma[X_Y].second},{blood-1, time+1}});
                }
            }
            qu.push({{X+1,Y},{blood, time+1}});
            qu.push({{X-1,Y},{blood, time+1}});
            qu.push({{X,Y+1},{blood, time+1}});
            qu.push({{X,Y-1},{blood, time+1}});
        }
    }
}