#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string arr[8] = {"ABCDEFGH","IJKLMNOP","QRSTUVWX","YZabcdef","ghijklmn","opqrstuv","wxyz0123","456789+/"};


ll X=0, Y=0; //當下座標

void North(ll D){
    X -= (D%8); 
    if (X < 0) X+=8;
}
void South(ll D){
    X += (D%8); 
    if (X >= 8) X-=8;
}
void West(ll D){
    Y -= (D%8); 
    if (Y < 0) Y+=8;
}
void East(ll D){
    Y += (D%8); 
    if (Y >= 8) Y-=8;
}


void judge(){
    char s;
    ll t,N;
    cin >> s >> t >> N;
    
    X=0, Y=0; //當下座標
    //找座標
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            if (arr[i][j] == s){
                X = i;
                Y = j;
                break;
            }
        }
    }

    // cout << Y << " " << X << endl;

    for (int D = 1; D <= N; D++){
        if (t == 0){
            North(D);
        } else if (t==1){
            North(D);
            East(D);
        } else if (t==2){
            East(D);
        } else if (t==3){
            South(D);
            East(D);
        } else if (t==4){
            South(D);
        } else if (t==5){
            South(D);
            West(D);
        } else if (t==6){
            West(D);
        } else if (t==7){
            North(D);
            West(D);
        }
        t = (t+1)%8;
        // cout << D << ":" << arr[X][Y] << " " << Y << " " << X << " " << "\n";
    }

    cout << arr[X][Y] << "\n";
}









int main() {
    Andy8787_want_AC
    ll Q;
    cin >> Q;

    while (Q--){
        judge();
    }
}