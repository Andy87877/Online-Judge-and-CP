#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int n,m;
    cin >> n >> m;
    
    int arr[n+1][m+1];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n+1; i++){
        arr[i][0] = 1;
    }

	for (int i = 0; i < n+1; i++){
      	for (int j = 0; j < m+1; j++){
      		if (i != 0 && j != 0) arr[i][j] = arr[i][j-1]*i;
			printf("%d\t", arr[i][j]);
    	}    
    	printf("\n");
    }	
}