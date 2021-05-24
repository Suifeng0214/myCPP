#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int dx[] = {1, -1, 0,  0};
int dy[] = {0,  0, 1, -1};
bool mp[15][15];
bool used[15][15];
queue <pair <int, int>> no_walk;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <=n; j++){
			cin >> mp[i][j];
		}
	}
	int sx, sy;
	cin >> sx >> sy;
	no_walk.emplace(sx+1, sy+1);
	used[sx+1][sy+1] = 1;
	
	while(!no_walk.empty()){
		int x = no_walk.front().first;
		int y = no_walk.front().second;
		no_walk.pop(); 
		used[x][y] = 1;
		for (int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (mp[nx][ny] != 1 && used[nx][ny] == 0 && (1 <= nx && nx <= n) &&(1 <= ny && ny <= m)){
				no_walk.emplace(nx, ny);
			}
		}
	}
	bool flag = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (mp[i][j] == 0 && used[i][j] == 0){
				flag = 1;
				break;
			}
		}
	}
	if (flag){
		cout << "true";
	}else{
		cout << "false";
	}
} 


