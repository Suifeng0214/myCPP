//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
char ans[500][500];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
//		memset(ans, 0, sizeof ans);
		vector <pair<int, int>> dots;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				cin >> ans[i][j];
				if (ans[i][j] == '*'){
					dots.emplace_back(i, j);
				}
			}
		}
		
		if (dots[0].F == dots[1].F || dots[0].S == dots[1].S){
			if (dots[0].F == dots[1].F){
				if (ans[1][dots[0].S] != '*' && ans[1][dots[1].S] != '*'){
					ans[1][dots[0].S] = '*';
					ans[1][dots[1].S] = '*';
				}else{
					ans[n][dots[0].S] = '*';
					ans[n][dots[1].S] = '*';
				}
			}else if (dots[0].S == dots[1].S){
				if (ans[dots[0].F][1] != '*' && ans[dots[1].F][1] != '*'){
					ans[dots[0].F][1] = '*';
					ans[dots[1].F][1] = '*';
				}else{
					ans[dots[0].F][n] = '*';
					ans[dots[1].F][n] = '*';
				}
			}
		}else{
			ans[dots[0].F][dots[1].S] = '*';
		//	ans[dots[0].S][dots[1].F] = '*';
			ans[dots[1].F][dots[0].S] = '*';
		//	ans[dots[1].S][dots[0].F] = '*';
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				cout << ans[i][j];
			}
			cout << "\n";
		}
	}	
} 


