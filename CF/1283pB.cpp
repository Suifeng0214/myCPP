#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, k, ans, val;
	cin >> q;
	while(q--){
		cin >> n >> k;
		val = k * (n/k);
		ans = val + min(k/2, n%k);
		cout << ans << "\n";
	}
	return 0;
} 
