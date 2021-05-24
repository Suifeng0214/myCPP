#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
vector <int> a[200010];
int ans[27];
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		for (int i = 0; i < 27; i++){
			ans[i] = 0;
		}
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < m; i++){
			a[i].clear();
			a[i].resize(27);
		}
		char tmp;
		for (int i = 1; i <= n; i++){
			cin >> tmp;
			a[i] = a[i-1];
			a[i][tmp-'a']++;
		}
		for (int i = 0; i < m; i++){
			int tmp;
			cin >> tmp;
			for (int j = 0; j < 26; j++){
				ans[j] += a[tmp][j];
			}
		}
		for (int i = 0; i < 26; i++){
			ans[i] += a[n][i];
		}
		for (int i = 0; i < 26; i++){
			cout << ans[i] << " "; 
		}
		cout << "\n";
	} 
	 
} 
