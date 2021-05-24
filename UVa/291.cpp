#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> v[6];
bool ved[6][6];
string ans="000000000";
bool check(){
	return (ved[1][2] && ved[2][3] && ved[3][4] && ved[4][5] && ved[5][1]  && ved[1][3] && ved[2][5] && ved[3][5]);
}
void dfs(int x, int now){
	ans[now] = '0'+x;
	if (check()){
		cout << ans << "\n";
		return;
	}
	for (int i : v[x]){
		if (ved[x][i]) continue;
		ved[x][i] = 1;
		ved[i][x] = 1;
		dfs(i, now+1);
		ved[x][i] = 0;
		ved[i][x] = 0;
	}
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	v[1].emplace_back(2);
	v[1].emplace_back(3);
	v[1].emplace_back(5);

	v[2].emplace_back(1);
	v[2].emplace_back(3);
	v[2].emplace_back(5);

	v[3].emplace_back(1);
	v[3].emplace_back(2);
	v[3].emplace_back(4);
	v[3].emplace_back(5);

	v[4].emplace_back(3);
	v[4].emplace_back(5);

	v[5].emplace_back(1);
	v[5].emplace_back(2);
	v[5].emplace_back(3);
	v[5].emplace_back(4);
	dfs(1, 0);
}
