//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define mid ((l+r)/2)
vector <int> a;
int ans = 0;
void cut(int l, int r){
	int len = r-l;
	if (len <= 1) return;
//	cerr << l << " " << r << "\n";
	int mn=1e18, loc=-1;
	for (int i = 0; i < a.size(); i++){
		if (a[i] <= l) continue;
		if (a[i] >= r) break;
		if (abs(mid-a[i]) < mn){
			mn = abs(mid-a[i]);
			loc = a[i];
		}
	}
	if (loc == -1) return;
	ans += len;
	cut(l, loc);
	cut(loc, r);
}
signed main() 
{ 
	freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, len;
	cin >> n >> len;
	int tmp;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		a.emplace_back(tmp);
	}
	cut(0, len);
	cout << ans << "\n";
}
