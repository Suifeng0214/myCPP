#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
int ans =0;
int dp[100];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i < 100; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	for (int i = 0; i < n; i++){
		ans = 0;
		int tmp;
		cin >> tmp;
		cout << dp[tmp] << "\n";
	}
} 
