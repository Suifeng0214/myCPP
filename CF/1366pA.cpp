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
		int aa = min(a, b);
		int bb = max(a, b);
		if (aa*2 < bb){
			cout << aa << "\n";
		}else{
			int x = aa/3,
				y = bb/3,
				n = aa%3,
				m = bb%3;
			int ans = x*2;
			if (!(bb-aa==1 && n==0) && n>=1 && !(aa==bb && m==1&&n==1)) ans++;
			cout << max(ans, bb/2) << "\n";
		}
	}
} 


