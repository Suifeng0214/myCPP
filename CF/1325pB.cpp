#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	set<int>a;
	cin >> q;
	while(q--){
		a.clear();
		int t;
		cin >> t;
		while(t--){
			int tmp;
			cin >> tmp;
			a.insert(tmp);
		}
		cout << a.size() << "\n";
	}
}


