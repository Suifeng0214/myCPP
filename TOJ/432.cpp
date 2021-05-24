#include <bits/stdc++.h>
using namespace std;
bool Map[1010][1010];
bool visit[1010][1010];
queue <pair<int, int>> bfs;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, mx, my, sx, sy, ex, ey, nx, ny, fires;
	
	cin >> mx >> my >> sx >> sy >> ex >> ey >> fires;
	for (int i = 1; i <= my; i++){
		for (int j = 1; j <= mx; j++){
			Map[i][j] = 1;
		}
	}
	for (int i = 0; i < fires; i++){
		int a, b;
		cin >> a >> b;
		Map[a][b] = 0;
	}
	
	/*
	for (int i = 0; i <= my+5; i++){
		for (int j = 0; j <= mx+5; j++){
			cout << Map[i][j];
		}
		cout << "\n";
	}*/
	bfs.push({sx, sy});
	while(!bfs.empty()){
		x = bfs.front().first;
		y = bfs.front().second;
		bfs.pop();
		visit[x][y] = true;
		
		for (int i = 0; i < 4; i++){
			int dx[]={0,0,1,-1};
			int dy[]={1,-1,0,0};
			nx = x + dx[i];
			ny = y + dy[i];
			
			if (visit[nx][ny] == 1 || Map[nx][ny] == 0)
				continue;
			
			bfs.push({nx, ny});
			visit[nx][ny] = true;
			
		}
	}
	if (visit[ex][ey] == true){
		cout << "Cool!\n";
	}else{
		cout << "Harakiri!\n";
	}
}



