
#include <bits/stdc++.h>
using namespace std;
bitset<100010>used;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	while(cin >> n >> k){
		used.reset();
		for (int i = 0; i < k; i++){
			int tmp;
			cin >> tmp;
			used[tmp] = 1;
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++){
			if (used[i]) cnt++;
			if (!used[i]) cout << i << " ";
		}
		if (cnt == n) cout << "*";
		cout << "\n";
	}

}
