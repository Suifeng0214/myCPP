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
		double h, u, d, f, now= 0;
		cin >> h >> u >> d >> f;
		f /= 100;
		double ans = 0;
		double tmp = u*f;
		while(now < h && now >= 0 && u > d){
			now += u;
			ans += 60;
			//cout << "u";
			if (now >= h) break;
			now -= d;
			//cout << "d";
			ans += 30;
			u -= tmp;
		} 
		if (now >= h)
			cout << max(ans / 60, (double)1) << "\n";
		else
			cout << 0 << "\n";
	}
} 


