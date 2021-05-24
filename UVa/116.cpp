//Author: Suifeng0214
//2020.6.30 19.03
#include <bits/stdc++.h>
#define int long long
using namespace std;
int mp[110][110];
int dp[110][110];
int route[110][110];
signed main()
{
	//freopen("out.txt", "w", stdout);
	int n, m;
	while(cin >> m >> n){
		ans.clear();
		memset(route, 0, sizeof(route));
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cin >> mp[i][j];
				if (j == n-1){
					route[i][j] = i;
				}
			}
		}
		for (int i = 0; i < m; i++){
			dp[i][n-1] = mp[i][n-1];
		}
		dp[m-1][n-1] = mp[m-1][n-1];
		for (int i = n-2; i >= 0; i--){
			for (int j = m-1; j >= 0; j--){
				int now_min= min(dp[j][i+1], min(dp[(j+1)%m][i+1],dp[(j-1+m)%m][i+1])) + mp[j][i];
				dp[j][i] = now_min;
				int top = (j-1+m)%m;
				int mid = j;
				int bot = (j+1)%m;
				vector <int> tar;
				tar.emplace_back(top); tar.emplace_back(mid); tar.emplace_back(bot);
				sort(tar.begin(), tar.end());
				for (int k = 0 ; k < 3; k++){
					if (dp[tar[k]][i+1] == now_min-mp[j][i]){
						route[j][i] = tar[k];
						break;
					}
				}
			}
		}
		
		int mwp=2147483648, pos=-1; // minimal-weight path 
		for (int i = 0; i < m; i++){
			if (dp[i][0] < mwp){
				pos = i;
				mwp = dp[i][0];
			}
		}
		int now = pos;
		cout << pos+1;
		for (int i = 0; i < n-1; i++){
			if (i == 0) cout << " ";
			cout << route[now][i]+1;
			if (i!=n-2) cout << " ";
			now = route[now][i];
		}
		cout << "\n";
		cout << mwp << "\n";
	}
} 
