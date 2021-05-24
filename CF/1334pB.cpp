#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int n, x, ans=0;
		cin >> n >> x;
		int sum=0;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
			if (tmp >= x){
				sum += tmp-x;
				ans++;
			}
		}
		sort(a.begin(), a.end());
		for (int i = n-1; i >= 0; i--){
			if (a[i] >= x) continue;
			if (sum >= (x - a[i])){
				sum -= (x - a[i]);
				ans++;
			}
		}
		cout << ans << "\n";
	}
} 
