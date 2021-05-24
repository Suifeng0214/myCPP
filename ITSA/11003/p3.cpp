#include <bits/stdc++.h>
using namespace std;
#define int long long
queue <pair<int, int>> spread;
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
		int ans1 = 0, ans2 = 0;
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		bool find = 0;
		for (int i = b; i>=0; i--){
			for (int j = b-i; j >= 0; j--){
				if (i*c + j*d == a) ans1=i, ans2=j, find=1;
				if (find)break;
			}
				if (find)break;
		}
		/*
		ans1 += min(a/c, b);
		b -= min(a/c, b);
		ans2 += min(a/d, b);*/
		cout << ans1 << " " << ans2 << "\n";
	}
} 


