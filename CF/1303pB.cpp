#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	int q, t, tmp, g, b, day, ans=0, n, nn;
	cin >> q;
	while(q--){
		ans=0;
		cin >> n >> g >> b;
		day = ceil((double)n/2);
		if (g >= day){
			cout << n << "\n";
			continue;
		}
		ans += day;
		ans += (ceil((double)day/g)-1)*b;
		cout << max(ans, n) << "\n";
	}
	return 0;
} 
