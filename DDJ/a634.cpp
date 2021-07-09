#include <bits/stdc++.h>
#define int long long
using namespace std;
int dp[15][15];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 1; i <= s1.size(); i++){
		for (int j = 1; j <= s2.size(); j++){
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			if (s1[i-1-1] == s2[j-1-1]) {
				dp[i][j] = max(dp[i-1][j-1]+1, dp[i][j]);
			}
		}
	}
	cout << dp[s1.size()][s2.size()] << "\n";
}
