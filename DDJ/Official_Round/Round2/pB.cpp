//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
int dp[100][100];
int fac[100005];
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	fac[1] = 1;
	for (int i = 2; i <= 10005; i++){
		fac[i] = fac[i-1] * i;
	}
	cout << fac[10];
	return 0 ;
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		for (int i = 1; i <= n+1; i++){
			cout << dp[n][i] << " \n"[i==n+1];
		}
	}
}
