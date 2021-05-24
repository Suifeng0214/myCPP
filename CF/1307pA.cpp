#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, tmp, n, d, ans;
	cin >> q;
	while(q--){
		int ans = 0;
		cin >> n >> d;
		cin >> tmp;
		ans += tmp; n--;
		int i = 1;
		while(n--){
			cin >> tmp;
			if (d > 0 && d >= i){
				ans += min(tmp, d/i);
				d -= i *tmp;
			}
			i++;
		}

		cout << ans << "\n";
	}
} 


