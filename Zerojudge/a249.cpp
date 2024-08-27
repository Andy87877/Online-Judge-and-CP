// 心得如下
// https://hackmd.io/brkWfna0QBuMtwqq_hwS0A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
    // 次數 深度 第幾顆球 答案 暫存(次方)
    int t, d, a, ans, temp;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &d, &a);
        a--;
        ans = pow(2, d-1); // 
        temp = ans/2;
	    for (; a; a>>=1, temp/=2) { 
	    	if ((a & 1)) {
	            ans += temp;
	    	} 
	    }
        printf("%d\n", ans);
    }
}