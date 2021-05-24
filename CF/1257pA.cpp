#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, x, a, b;
		cin >> n >> x >> a >> b;
		int ans = min(abs(a-b) + x, n-1);
		cout << ans << "\n";
	}
} 
