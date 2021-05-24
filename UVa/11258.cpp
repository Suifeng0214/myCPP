//Author: Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
int arr[1000][1000];
int dp[1000][1000];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			string now = "";
			for (int j = i; j < s.size(); j++){
				now += s[j];
				int tmp = stoll(now);
				if (tmp <= 2147483647)
					arr[i][j] = stoll(now);
				else{
					break;
				}
			}
		}
		/*
		for (int i = 0; i < s.size(); i++){
			for (int j = 0; j < s.size(); j++){
				cout << dp[i][j] << " ";
			}
			cout << "\n";
		}*/
		int ans = 0;
		for (int i = 0; i < s.size(); i++){
			for (int j = i; j < s.size(); j++){
				for (int k = j+1; k < s.size(); k++){
					//if (i<=j&&j<=k);else continue;
					if (dp[i][j] + dp[j][k] <= 2147483647)
						ans = max(ans, dp[i][j] + dp[j][k]);
				}
			}
		}
		cout << dp[0][s.size()-1] << "\n";
	}
}
