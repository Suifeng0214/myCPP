#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	vector <int> b;
	while(q--){
		a.clear();
		b.clear();
		b.resize(8e3+10);
		int n;
		cin >> n;
		
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		
		for (int i = 0; i < n; i++){
			int tmp = a[i];
			for (int j = i+1; j < n; j++){
				tmp += a[j];
				if (tmp <= n)
					b[tmp]++;
			}
		}
		int ans = 0;
		for (int i : a){
			if (b[i] > 0) ans++;
		}
		cout << ans << "\n";
	}
} 


