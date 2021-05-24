#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <pair<int, int>> a;
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
		string s[201];
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++){
			cin >> s[i];
		}
		/*
		}*/
		
		if (s[1][1] == s[2][0]){
			if (s[n][n-2] == s[n-1][n-1]){
				if (s[1][1] != s[n][n-2]){
					cout << 0 << "\n";
				}else{
					cout << 2 << "\n";
					cout << "1 2\n2 1\n";
				}
			}else{
				cout << "1\n";
				if (s[1][1] == s[n][n-2]){
					cout << n << " " << n-1 << "\n";
				}else{
					cout << n-1 << " " << n << "\n";
				}
			}
		}else{
			if (s[n][n-2] == s[n-1][n-1]){
				if (s[1][1] == s[n][n-2]){
					cout << "1\n1 2\n";
				}else{
					cout << "1\n2 1\n";
				}
			}else{
				int cnt = 0;
				if (s[1][1] != '0') a.emplace_back(1, 2), cnt++;
				if (s[2][0] != '0') a.emplace_back(2, 1), cnt++;
				if (s[n][n-2] != '1') a.emplace_back(n, n-1), cnt++;
				if (s[n-1][n-1] != '1') a.emplace_back(n-1, n), cnt++;
				cout << cnt << "\n";
				for (auto i:a){
					cout << i.first << " " << i.second << "\n";
				}
			}
		}
	}	
} 


