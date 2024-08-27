#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll m,n;
    
    while (cin >> m >> n) {
    	
    char arr[m][n], land;
    for (ll i = 0; i < m; i++) {
    	for (ll j = 0; j < n; j++) {
    		cin >> arr[i][j];
    	}
    }
    
    ll x,y;
    cin >> x >> y;
    land = arr[x][y];
	for (ll i = 0; i < m; i++) {
    	for (ll j = 0; j < n; j++) {
    		if (arr[i][j] == land) {
    			arr[i][j] = 'l';
    		} else {
    			arr[i][j] = 'w';
    		}
    	}
    }
    
    queue<pair<ll,ll>> que;
    pair<ll,ll> pa;
    
    pa.first = x; pa.second = y;
	que.push(pa);
	
	arr[x][y] = '.';
	while (que.size() != 0) {
		pa = que.front();
		que.pop();
		
		x = pa.first; y = pa.second;
		if (y != n-1) {
			if (arr[x][y+1] == 'l') {
				pa.first = x; pa.second = y+1;
				arr[x][y+1] = '.';
	    		que.push(pa);
			} 
		} else {
			if (arr[x][0] == 'l') {
				pa.first = x; pa.second = 0;
				arr[x][0] = '.';
	    		que.push(pa);
			} 
		}
		
		if (y != 0) {
			if (arr[x][y-1] == 'l') {
				pa.first = x; pa.second = y-1;
				arr[x][y-1] = '.';
	    		que.push(pa);
			} 
		} else {
			if (arr[x][n-1] == 'l') {
				pa.first = x; pa.second = n-1;
				arr[x][n-1] = '.';
	    		que.push(pa);
			} 
		}
		
		if (x != m-1) {
			if (arr[x+1][y] == 'l') {
				pa.first = x+1; pa.second = y;
				arr[x+1][y] = '.';
	    		que.push(pa);
			} 
		}
		
		if (x != 0) {
			if (arr[x-1][y] == 'l') {
				pa.first = x-1; pa.second = y;
				arr[x-1][y] = '.';
	    		que.push(pa);
			} 
		}
	}
	
    // for (ll i = 0; i < m; i++) {
    	// for (ll j = 0; j < n; j++) {
    		// cout << arr[i][j];
    	// }
    	// cout << "\n";
	// }
    
    ll ans = 0, tmp;
    
    for (ll i = 0; i < m; i++) {
    	for (ll j = 0; j < n; j++) {
    		if (arr[i][j] == 'l') {
    			tmp = 0;
    			pa.first = i; pa.second = j;
				que.push(pa);
				
				arr[i][j] = ',';
				while (que.size() != 0) {
					tmp++;
					pa = que.front();
					que.pop();
					x = pa.first; y = pa.second;
					if (y != n-1) {
						if (arr[x][y+1] == 'l') {
							pa.first = x; pa.second = y+1;
							arr[x][y+1] = ',';
				    		que.push(pa);
						} 
					} else {
						if (arr[x][0] == 'l') {
							pa.first = x; pa.second = 0;
							arr[x][0] = ',';
				    		que.push(pa);
						} 
					}
					
					if (y != 0) {
						if (arr[x][y-1] == 'l') {
							pa.first = x; pa.second = y-1;
							arr[x][y-1] = ',';
				    		que.push(pa);
						} 
					} else {
						if (arr[x][n-1] == 'l') {
							pa.first = x; pa.second = n-1;
							arr[x][n-1] = ',';
				    		que.push(pa);
						} 
					}
					
					if (x != m-1) {
						if (arr[x+1][y] == 'l') {
							pa.first = x+1; pa.second = y;
							arr[x+1][y] = ',';
				    		que.push(pa);
						} 
					}
					
					if (x != 0) {
						if (arr[x-1][y] == 'l') {
							pa.first = x-1; pa.second = y;
							arr[x-1][y] = ',';
				    		que.push(pa);
						} 
					}
				}
				
				if (ans < tmp) ans = tmp;
    		}
    	}
    }
    
    cout << ans << "\n";   
     
    // for (ll i = 0; i < m; i++) {
    	// for (ll j = 0; j < n; j++) {
    		// cout << arr[i][j];
    	// }
    	// cout << "\n";
    // }
    
    }
}