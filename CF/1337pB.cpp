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
		int x, n, m;
		cin >> x >> n >> m;
		while(n-- && x > 20){
			x = x/2+10;
		}
		while(m--){
			x -= 10;
		}
		if (x <= 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
} 


