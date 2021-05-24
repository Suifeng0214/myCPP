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
		int tmp;
		for (int i = 0; i < n*k; i++){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		int ans = 0;
		int cnt = 0;
		int now = 1;
		for (int i = n*k-1; i>=0; i--){
			if (now++ % ((n/2)+1) == 0){
				//cout << a[i] << "@\n";
				ans += a[i];
				cnt++;
				if (cnt == k) break;
			}
		}
		cout << ans << "\n";
	}
} 


