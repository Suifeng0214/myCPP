#include <bits/stdc++.h>
#define int long long
#define mp(x, y) make_pair(x, y)
#define F first
#define S second
const int N = 3e5+10;
int l[N], r[N], pl[N], sl[N], pr[N], sr[N]; 
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	pr[0] = 0x3f3f3f3f;
	sr[n+1] = pr[0];
	for (int i = 1; i <= n; i++){
		cin >> l[i] >> r[i];
		pl[i] = max(pl[i-1], l[i]);
		pr[i] = min(pr[i-1], r[i]);
	}
	for (int i = n; i >= 1; i--){
		sl[i] = max(sl[i+1], l[i]);
		sr[i] = min(sr[i+1], r[i]);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		ans = max(ans, min(pr[i-1], sr[i+1]) - max(pl[i-1], sl[i+1]));
	}

	cout << ans << "\n";
}
