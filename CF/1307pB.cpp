#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, x, tmp, mx;
	bool c;
	cin >> q;
	while (q--){
		c=0;
		int mx = -1;
		cin >> n >> x;
		while (n--){
			cin >> tmp;
			if (tmp == x) c=1;
			mx = max (tmp, mx);
		}
		if (c){
			cout << 1 << "\n";
		}else{
			if (mx > x){
				cout << 2 << "\n";
			}else if (x % mx == 0){
				cout << x / mx << "\n";
			}else{
				cout << x / mx +1 << "\n";
			}
		}
	}
} 


