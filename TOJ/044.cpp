#include <bits/stdc++.h>
using namespace std;
int mp[1010][1010];
bool used[1010][1010];
int dist[1010][1010];
int sx, sy, ex, ey;
queue <pair<int, int>> noWalk;
void cinFun(int N, int M);
int main(void)
{
	ios::sync_with_stdio(0);
//	cin.tie(0);
	int x, y, i, j, N, M;
	int nx,ny;
	cin >> N >> M;
	cinFun(N, M);
	noWalk.push({sx+1, sy+1});
	dist[sx+1][sy+1] = 0;
	while(!noWalk.empty()){
		x = noWalk.front().first;
		y = noWalk.front().second;
		noWalk.pop();
		used[sx][sy] = true;
		int dx[] = {0, 0, 1, -1};
		int dy[] = {1, -1, 0, 0};

		for (i = 0; i < 4; i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(mp[nx][ny] == 1 || used[nx][ny] == 1){
				continue;
			}
			noWalk.push({nx, ny});
			used[nx][ny] = true;
			dist[nx][ny] = dist[x][y] + 1;
		}
	}
	cout << dist[ex+1][ey+1] << "\n";
	return 0;

}

void cinFun(int N, int M)
{
	int i, j;
	// 初始化邊界 
	for (i = 0; i < N + 10; i++){
		for (j = 0; j < M+10; j++){
			mp[i][j] = 1;
			dist[i][j] = -1;
		}
	} 
	// 建置迷宮 
	for (i = 1; i < N+1; i++){
		for (j = 1; j < M+1; j++){
			cin >> mp[i][j];
		}
	} 
	// 起點終點 
	cin >> sx >> sy >> ex >> ey;
}
