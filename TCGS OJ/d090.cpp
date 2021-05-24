//10:46
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#define int long long
using namespace std;
int dx[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dy[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int mp[15][15];
bool used[15][15];
int tar;
int n;
bool flag = 0;
vector <int> ans;
void dfs(int r, int c, int cnt){
	//if (flag) return; 
	used[r][c] = 1;
	//cout << r << "@" << c << "#"<<cnt << "\n";
	mp[r][c] = cnt;
	if (cnt == tar){
		for (int i = 1; i <= 3; i++){
			for (int j = 1; j <= n; j++){
				if (mp[i][j] > ans[(i-1)*n+(j-1)]) return;
				if (mp[i][j] < ans[(i-1)*n+(j-1)]){
					ans.clear();
					for (int ii = 1; ii <= 3; ii++){
						for (int jj = 1; jj <= n; jj++){
							ans.push_back(mp[ii][jj]);
						}
					}
					flag = 1;
					return;
				}
			}
		}
		flag = 1;
		return;
	}
	for (int i = 0; i < 8; i++){
		int nr = r + dy[i];
		int nc = c + dx[i];
		if (!used[nr][nc] && 1 <= nc && nc <= n && 1 <= nr && nr <= 3){
			dfs(nr, nc, cnt+1);
			used[nr][nc] = 0;
		}
	}
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	tar = n*3;
	for (int i = 0; i < n*3; i++){
		ans.push_back(0x3f3f3f3f);
	}
	dfs(1, 1, 1);
	if (!flag) cout << "0\n";
	else{
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i];
			if (i!=ans.size()-1) cout << " ";
		}
		cout << "\n";
	}
}
