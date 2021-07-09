#include <bits/stdc++.h>
#define int long long
#define EB emplace
using namespace std;
bool mp[50][50][50];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
queue <int> N;
queue <int> R;
queue <int> C;
unordered_map <string, bool> used, used2;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, r, c;
	cin >> n >> r >> c;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= r; j++){
			for (int k = 1; k <= c; k++){
				cin >> mp[i][j][k];
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			if (mp[1][i][j] == 1){
				N.EB(1);
				R.EB(i);
				C.EB(j);
				string tmp = 
					to_string(1) + " " + to_string(i) + " " + to_string(j);
				used[tmp] = 1;
			}
		}
	}
	while(!N.empty()){
		int z = N.front(),
			x = R.front(),
			y = C.front();
			N.pop();
			R.pop();
			C.pop();
			for (int i = 0; i < 4; i++){
				int nx = x + dx[i],
					ny = y + dy[i];
				string tmp = 
					to_string(z) + " " + to_string(nx) + " " + to_string(ny);
				if (mp[z][nx][ny] == 1 && used[tmp] == 0){
					N.EB(z);
					R.EB(nx);
					C.EB(ny);
					used[tmp] = 1;
				}
			}
			if (mp[z+1][x][y] == 1){
				N.EB(z+1);
				R.EB(x);
				C.EB(y);
				string tmp = 
					to_string(z+1) + " " + to_string(x) + " " + to_string(y);
				used[tmp] = 1;
			}
			ans++;
	}
	while(!N.empty()) N.pop();
	while(!R.empty()) R.pop();
	while(!C.empty()) C.pop();
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			if (mp[n][i][j] == 1){
				N.EB(n);
				R.EB(i);
				C.EB(j);
				string tmp = 
					to_string(n) + " " + to_string(i) + " " + to_string(j);
				used2[tmp] = 1;
			}
		}
	}
	while(!N.empty()){
		int z = N.front(),
			x = R.front(),
			y = C.front();
			N.pop();
			R.pop();
			C.pop();
			string tmp = 
				to_string(z) + " " + to_string(x) + " " + to_string(y);
			if (used[tmp] == 1)
				ans--;
			if (mp[z-1][x][y] == 1){
				N.EB(z-1);
				R.EB(x);
				C.EB(y);
				string tmp = 
					to_string(z-1) + " " + to_string(x) + " " + to_string(y);
				used2[tmp] = 1;
				////
				for (int i = 0; i < 4; i++){
					int nx = x + dx[i],
						ny = y + dy[i];
					string tmp = 
						to_string(z-1) + " " + to_string(nx) + " " + to_string(ny);
					if (mp[z-1][nx][ny] == 1 && used2[tmp] == 0){
						N.EB(z-1);
						R.EB(nx);
						C.EB(ny);
						used2[tmp] = 1;
					}
				}
			}
	}
	cout << ans << "\n";
}
