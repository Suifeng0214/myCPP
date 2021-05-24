//Author: Suifeng0214
//2020.12.06 
#include <bits/stdc++.h>
#define int long long 
using namespace std;
int dx[] = {1, -1,  0,  0,  0,  0};
int dy[] = {0,  0,  1, -1,  0,  0};
int dz[] = {0,  0,  0,  0,  1, -1};
queue <int> qN;
queue <int> qR;
queue <int> qC;
vector <string> mp[140];
bool visited[140][140][140];

int r, c, n, N, nr, nc;
string in;
int ans = 0;
void bfs(){
	qN.emplace(N);
	qR.emplace(nr);
	qC.emplace(nc);
	visited[N][nr][nc]=1;
	int tmpans=0;
	while(!qN.empty()){
		int x = qN.front(); qN.pop();
		int y = qR.front(); qR.pop();
		int z = qC.front(); qC.pop();
	//	cout << x << " " << y << " " << z << "\n";
		tmpans++;
		for (int i = 0; i < 6; i++){
			int nx = x+dx[i],
				ny = y+dy[i],
				nz = z+dz[i];
			if (nx<0 || nx>=n) continue;
			if (ny<0 || ny>=r) continue;
			if (nz<0 || nz>=c) continue;
			if (!visited[nx][ny][nz] && mp[nx][ny][nz]=='0'){
				qN.emplace(nx);
				qR.emplace(ny);
				qC.emplace(nz);
				visited[nx][ny][nz]=1;
			}
		}
	}
//	cout << "XD";
	ans=max(tmpans, ans);
}
signed main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> r >> c >> n;
	cin >> in;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < r; j++){
			string tmp;
			for (int k = 0; k < c; k++){
				tmp+=in[i*(r*c)+j*r+k];	
			}
			mp[i].emplace_back(tmp);
//			cout << tmp << "\n";
		}
	}
	for (int i = 0; i < in.size(); i++){
		//cout << mp[i/(r*c)][i%(r*c)/r][i%(r*c)%r] ;
		//continue;
		if (in[i] = '0'){
			N=i/(r*c), nr=i%(r*c)/r, nc=i%(r*c)%r;
			if (!visited[N][nr][nc])
				bfs();
		}
	}
	cout << ans << "\n";
}
