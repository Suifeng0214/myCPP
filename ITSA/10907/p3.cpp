#include <bits/stdc++.h>
using namespace std;
#define int long long
queue <pair<int, int>> spread;
//set <int> st;
//map <int, int> mp;
char mp[11000][11000];
bool used[11000][11000];
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> mp[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (mp[i][j] == 'C'){
				for (int k = 0; k < 8; k++){
					int nx = dx[k];
					int ny = dy[k];
					if (mp[i+ny][j+nx] == 'P' && used[i+ny][j+nx] != 1){
						spread.emplace(i+ny, j+nx);
						ans++;
						//cout << i+ny << " " << j+nx << "@\n"; 
						used[i+ny][j+nx] = 1;
					}
				}
			}
		}
	}
	while(!spread.empty()){
		int y = spread.front().first, x = spread.front().second;
		spread.pop();
		for (int k = 0; k < 8; k++){
				int nx = dx[k];
				int ny = dy[k];
				if (mp[y+ny][x+nx] == 'P' && used[y+ny][x+nx] != 1){
					spread.emplace(y+ny, x+nx);
					ans++;
					//cout << i+ny << " " << j+nx << "@\n"; 
					used[y+ny][x+nx] = 1;
				}
			}
	}
	cout << ans << "\n";
} 


