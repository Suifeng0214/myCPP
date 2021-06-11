//Suifeng0214
//6:41
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
vector <int> a;
signed main() 
{ 
//	freopen("ans.txt", "w", stdout);
//	freopen("popcorn.in", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int n, l, r;
		cin >> n >> l >> r;
		int tmp;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end()); 
		int ans = 0;
		for (int i = 0; i < n; i++){
			auto s = lower_bound(a.begin(), a.end(), l-a[i]);
			auto e = upper_bound(a.begin(), a.end(), r-a[i]);
			if (l-a[i] <= a[i] && a[i] <= r-a[i]) ans--;
//			cout << e-s << "@";
			ans += max(e-s, 0LL);
		}
		cout << ans/2 << "#\n";
	}
}
