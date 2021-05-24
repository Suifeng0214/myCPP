#include <bits/stdc++.h>
using namespace std;
int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, q, a; cin >> n >> q;
	set<int> s;
	while (q--) {
		cin >> a;
		s.insert(a);
		cout << (s.size() == n ? "YES" : "NO") << '\n';			
	}
	return 0;
	
}
