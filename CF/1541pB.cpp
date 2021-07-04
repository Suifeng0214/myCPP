//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
vector <int> a;
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
		a.clear();
		a.emplace_back(0);
		int n;
		cin >> n;
		int tmp;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		int ans = 0;
		for (int i = 1; i < n; i++){
			for (int j = i+1; j <= n; j++){
				if (a[i] * a[j] == i + j) ans++;
			}
		}
		cout << ans << "\n";
	}
} 


