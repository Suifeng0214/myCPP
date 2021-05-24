//26/06/20 23:07
#include <bits/stdc++.h>
#define int long long
using namespace std;
bool mp[1000][1000];
int dp[1000][1000];
signed main()
{
	//freopen("out.txt", "w", stdout);
	int q;
	cin >> q;
	bool space=0;
	while(q--){
		if (space++) cout << "\n";
		for (int i = 0; i < 1000; i++){
			for (int j = 0 ; j < 1000; j++){
				mp[i][j] = 0;
				dp[i][j] = 0;
			}
		}
		string obstacle;
		int w, n;
		cin >> w >> n;
		getline(cin, obstacle); //invalid
		for (int i = 1; i <= w; i++){
			getline(cin, obstacle);
			stringstream ss(obstacle);
			int tmp;
			ss >> tmp;
			while(ss >> tmp){
				//cout << tmp << "@\n";
				mp[i][tmp] = 1;
			}
		}
		dp[1][1]=1;
		for (int i = 1; i <= w; i++){
			for (int j = 1; j <= n; j++){
				if (i==1 && j==1) continue; 
				if (mp[i][j]) continue;
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
		cout << dp[w][n] << "\n";
	}
}
