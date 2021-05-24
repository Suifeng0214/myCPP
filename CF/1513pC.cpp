//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
//map <int, string> dp;
string dp[(int)2e5+10];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		string s;
		int m;
		cin >> s >> m;
		int now = 0;
		dp[now] = s;
		for (int i = 0; i < m; i++){
			vector <int> tmp;
			string ns;
			for (int j = 0; j < dp[now].size(); j++){
				string tmps;
				tmps += dp[now][j];
				ns += to_string(stoll(tmps)+1);
			}
			dp[++now] = ns;
		}
		cout << dp[m].size() << "\n";
	}	
} 


