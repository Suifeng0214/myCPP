#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		int ans = 1e9;
		for (int i = 1; i < n; i++){
			ans = min(ans, a[i] - a[i-1]);
		}
		cout << ans << "\n";
	}
}
