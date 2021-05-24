#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		int k = max(a, b);
		int ans = 0x3f3f3f3f;
		/*
		for (int i = 0; i <= max(a, b); i++){
			ans = min(ans, (a^i) + (b^i));
			cout << i << "@";
		}*/
		cout << (a^k)+(b^k) << "\n";
	}	
} 


