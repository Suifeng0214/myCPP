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
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		vector <int> a;
		int ans = 0, pos=0, mn = 0x3f3f3f3f;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
			if (tmp > 0) mn = min(mn, tmp);
			ans += (tmp <= 0);
			pos += (tmp > 0);
		}
		sort(a.begin(), a.end());
		bool chk=1;
		for (int i = 1; i < n; i++){
			if (a[i] > 0) break;
			if (a[i-1] == a[i] || abs(a[i]-a[i-1]) < mn){
				chk=0;
				break;
			}
		}
		if (chk && pos){
			cout << ans+1 << "\n";
		}else{
			cout << ans << "\n";
		}
	}
} 


