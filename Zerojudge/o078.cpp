// https://zerojudge.tw/ShowProblem?problemid=o078
/*
acm
2
accaamcm
ac -> cc --> ca -->......
map 存起來
check map if not --> ans
*/
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int L;
string K, S;
map<string,int> ma;

void judge();
string check();

int main() {
    Andy8787_want_AC
    cin >> K >> L >> S;
    judge();
    
    string ans;
    ans = check();
    cout << ans << "\n";
}

void judge(){
    string tmp = "";
    for (int i = 0; i < L; i++){
        tmp += S[i];
    }
    ma[tmp]++;
    for (int i = L; i < S.size(); i++){
        tmp.erase(tmp.begin(), tmp.begin()+1);
        tmp += S[i];

        ma[tmp]++;
    }
}

string check(){
    vector<int> sort_vec; // index
    string tmp = "";
    for (int i = 0; i < L; i++){
        tmp += K[0];
        sort_vec.push_back(0);
    }

    while(true){
        // cout << tmp << " ";
        // for (int i = 0; i < L; i++){
        //     cout << sort_vec[i] << " ";
        // }
        // cout << "\n";

        if (ma[tmp] == 0) return tmp;
        
        while (sort_vec[sort_vec.size()-1] == K.size()-1){
            sort_vec.pop_back();
            tmp.pop_back();
        }

        tmp.pop_back();
        sort_vec[sort_vec.size()-1]++;
        tmp += K[sort_vec[sort_vec.size()-1]];

        while (sort_vec.size() != L){
            sort_vec.push_back(0);
            tmp += K[0];
        }
    }
}

/*
L = 3 K.size() = 2
0 0 0 
0 0 1
0 1 0
0 1 1
0 2 0 .......
***類似n進制***
*/