//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, m;
		cin >> n >> m;
		vector <int> arr(n+5);
		vector <double> dp(m+5), p(m+5), fail(m+5);
		vector <int> r(m+5);
		int flag = -1;
		for (int i = 1; i <= n; i++){
			cin >> arr[i];
			if (arr[i] != i) flag = i;
		}
		int last = 0;
		fail[0] = 1;
		for (int i = 1; i <= m; i++){
			cin >> r[i] >> p[i];
			if (r[i] < flag){
				dp[i] = dp[i-1];
				continue;
			}
			fail[i] = fail[last] * (1-p[i]);
			dp[i] = dp[i-1] + fail[last] * p[i];
			last = i;
		}
		if (flag == -1){
			cout << "1.000000\n";
			continue;
		}
		cout << fixed << setprecision(6) << dp[last] << "\n";
	}	
} 


