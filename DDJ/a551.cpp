//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
int pre[55][55];
int dp[55][2510];
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, m, c;
		cin >> n >> m >> c;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> pre[i][j];
				pre[i][j] += pre[i][j-1];
			//	cout << pre[i][j] << " ";
			}
		//	cout << "\n";
		}
//		memset(dp, 0, sizeof dp);
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= c; j++){
				dp[i][j] = dp[i-1][j];
				if (j <= m)
					dp[i][j] = max(dp[i][j], pre[i][j]);
				for (int k = 1; k <= min(j, m); k++){
					dp[i][j] = max(dp[i][j], dp[i-1][j-k]+pre[i][k]);
				}
				
			//	cout << dp[i][j] << " ";
			}
	//		cout << "\n";
		}
		cout << dp[n][c] << "\n";
	}
}
