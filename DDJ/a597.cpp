//Suifeng0214
//7:02
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define V first
#define W second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
#define mid ((l+r)/2)
//const int N = ;
int dp[3][100000+5];
vector <pair <int, int>> vw[1010];
signed main() 
{ 
//	freopen("ans.txt", "w", stdout);
//	freopen("popcorn.in", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	/*
	clock_t t1, t2;
	t1 = clock();
	for (int i = 0; i < 5e8; i++);
	t2 = clock();
	cout << float(t2-t1)/CLOCKS_PER_SEC << "\n";
	*/
	
	int n, c;
	cin >> n >> c;
	for (int i = 1; i <= n; i++){
		int k;
		cin >> k;
		for (int j = 1; j <= k; j++){
			int a, b;
			cin >> a >> b;
			vw[i].emplace_back(a, b);
		}
	}
	for (int i = 1; i <= n; i++){
		int ii = i%2+1;
		int ii_ = (ii==1)? 2 : 1;
		for (int j = 1; j <= c; j++){
			dp[ii][j] = max(dp[ii_][j], dp[ii][j-1]);
			for (int k = 0; k < vw[i].size(); k++){
				int cost = vw[i][k].W;
				int ouo = vw[i][k].V;
				if (j-cost >= 0){
					dp[ii][j] = max(dp[ii][j], dp[ii_][j-cost] + ouo);
				}
			}
//			cout << dp[ii][j] << " ";
		}
//		cout << "\n";
	}
	cout << max(dp[1][c], dp[2][c]) << "\n";
}
