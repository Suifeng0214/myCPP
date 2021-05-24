//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//11:16
	int q;
	cin >> q;
	while(q--){
		int n, m;
		cin >> n >> m;
		bool chg=0;
		for (int i = 0; i < n; i++){
			vector <int> a;
			for (int j = 0; j < m; j++){
				int tmp;
				cin >> tmp;
				a.emplace_back(tmp);
			}
			if (!chg)
				sort(a.begin(),a.end());
			else sort(a.rbegin(),a.rend());
			for (auto i : a)cout << i << " ";
			cout << "\n";
			chg=!chg;
		}
	}
} 


