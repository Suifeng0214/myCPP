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
	int a, b;
	int q;
	cin >> q;
	while(q--){
		cin >> a >> b;
		int x, y;
		x = min(a, b);
		y = max(a, b);
		//ans = x;
		cout << min(x, y/2) << "\n";
	}
	
} 


