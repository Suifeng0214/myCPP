#include <bits/stdc++.h>
#define SagiriMywife ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
short mp[1100][1100];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool used[1100][1100];
signed main(){
	SagiriMywife
//	short a = 32767;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> mp[i][j];
		}
	}
	int cx, cy, px, py;
	cin >> cx >> cy >> px >> py;
//	vector <pair<int, int> > c_pos;
	queue <pair<int, int> > bfs;
	bfs.emplace(cx, cy);
	used[cx][cy] = 1;
	if (abs(cx-px) + abs(cy-py) <= 3){
		cout << "yes\n";
		return 0;
	}
	while(!bfs.empty()){
		for (int i = 0; i < 4; i++){
			int x = bfs.front().first, y = bfs.front().second;
			int nx = x + dx[i], ny = y + dy[i];
			int z = mp[nx][ny] - mp[x][y];
			if (!used[nx][ny] && 1 <= nx && nx <= n &&
				1 <= ny && ny <= m && -2 <= z && z <= 1){
				bfs.emplace(nx, ny);
				used[nx][ny] = 1;
				if (abs(nx-px) + abs(ny-py) <= 3){
					cout << "yes\n";
					return 0;
				}
			}
		}
		bfs.pop();
	}
	cout << "no\n";
}
