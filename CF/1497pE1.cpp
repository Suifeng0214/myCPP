//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
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
		int n, k;
		cin >> n >> k;
		a.emplace_back(0);
		int ans = 1, tmpans = 1;

		int tmp;
		for (int i = 1; i <= n+1; i++){
			if (i!=n+1)
			cin >> tmp;
			a.emplace_back(tmp);
			if (tmp < a[i-1]) tmpans++;
			else ans = max(ans, tmpans), tmpans=1;
			if (i==n) tmp = 1e7+5;
		}
		cout << ans << "\n";
	}	
} 
 
