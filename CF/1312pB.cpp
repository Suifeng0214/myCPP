#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	int q;
	cin >> q;
	while(q--){
		int n;
		a.clear();
		cin >> n;
		while(n--){
			int tmp;
			cin >> tmp;
			a.emplace_back(-tmp);
		}
		sort(a.begin(), a.end());
		for (int i : a) cout << -i << " ";
		cout << "\n";
	}
}


