//Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;

struct SW {
	static const int INF = 1000000007;
	static const int N = 506;
	int adj[N][N], wei[N], n;
	bool vis[N], del[N];
	void init(int _n){
		n = _n;
		memset(adj, 0, sizeof(adj));
		memset(del, 0, sizeof(del));
	}
	void add_edge(int x, int y, int w){
		adj[x][y] += w;
		adj[y][x] += w;
	}
	void search()(int &s, int &t){
		memset(wei, 0, sizeof(wei));
		memset(vis, 0, sizeof(vis));
		s = t = -1;
		while(1){
			int mx = -1, mx_id = 0;
			for (int i = 0; i < n; i++){
				if (!del[i] && !vis[i] && mx < wei[i]){
					mx_id = i;
					mx = wei[i];
				}
			}
			if (mx == -1) break;
			vis[mx_id] = true;
			s = t; t = mx_id;
			for (int i = 0; i < n; i++){
				if (!vis[i] && !del[i]){
					wei[i] += adj[mx_id][i];
				}
			}
		}
	}

	int solve(){
		int ret = INF;
		for (int i = 0; i < n-1; i++){
			int x, y;
			search(x, y);
			ret = min(ret, wei[y]);
			del[y] = true;
			for (int j = 0; j < n; j++){
				adj[x][j] += adj[y][j];
				adj[j][x] += adj[y][j];
			}
		}
		return ret;
	}
}SW;





signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

} 


