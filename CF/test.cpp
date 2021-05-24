//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int ouo =0 ;
queue <pair<int,int> > tmp;
void dfs(int x, int y, int ex, int ey, int sum, int k){
	cout << x << " " << y << "@\n";
	if (ouo) return;
	if (x > ex || y > ey || sum > k){
		return;
	}else if (x == ex && y == ey && sum == k){
		cout << "YES\n";
		ouo=1;
		return;
	}
//	tmp.emplace(x+1, y);
	dfs(x+1, y, ex, ey, sum+y, k);
//	tmp.pop();
//	tmp.emplace(x, y+1);
	dfs(x, y+1, ex, ey, sum+x, k);
//	tmp.pop();
	
}
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int x, y, k;
	cin >> x >> y >> k;
//	tmp.emplace(x, y);
	ouo=0;
	dfs(1, 1, x, y, 0, k);
	if (!ouo) cout << "NO\n";
} 



