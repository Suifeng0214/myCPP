//Author: Suifeng0214
#include <bits/stdc++.h>
using namespace std;
char mp[25][25];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 25; j++){
			mp[i][j] = '1';
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> mp[i][j];
		}
	}
	int ans =0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (mp[i][j] == 'b'){
				if (mp[i-1][j] != '1')
					mp[i-1][j] = 'x';
				if (mp[i+1][j] != '1') 
					mp[i+1][j] = 'x';
				if (mp[i][j+1] != '1') 
					mp[i][j+1] = 'x';
				if (mp[i][j-1] != '1')
					mp[i][j-1] = 'x';
			}else if (mp[i][j] == 'B'){
				for (int k = i-1; k >= 0; k--){
					if (mp[k][j] == '1') break;
					if (mp[k][j] == '0')
						mp[k][j] = 'x';
				}
				for (int k = i+1; k <= n; k++){
					if (mp[k][j] == '1') break;
					if (mp[k][j] == '0')
						mp[k][j] = 'x';
				}
				for (int k = j+1; k <= m; k++){
					if (mp[i][k] == '1') break;
					if (mp[i][k] == '0')
						mp[i][k] = 'x';
				}
				for (int k = j-1; k >= 0; k--){
					if (mp[i][k] == '1') break;
					if (mp[i][k] == '0')
						mp[i][k] = 'x';
				}
			}
		}
	}
	
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
			//	cout << mp[i][j];
				if (mp[i][j] == '0') ans++;
			}
		//	cout << "\n";
		}
	cout << ans << "\n";
} 
