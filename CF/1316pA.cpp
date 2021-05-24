#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, m;
		cin >> n >> m;
		int sum=0, tmp;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			sum += tmp;
		}
		cout << min(sum, m) << "\n";
	}
} 


