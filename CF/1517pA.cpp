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
		int x = 2050*1e15;
		int n;
		cin >> n;
		int ans = 0;
		while(n >= 2050 && x >= 2050){
			if (x > n){
				x/=10;
				continue;
			}else{
				ans += n/x;
	//			cout << n/x << "@\n";
				n = n%x;
			}
		}
	//	cout << ans << "\n";
		cout << ((ans == 0 || n!=0)? -1 : ans) << "\n";
	}
} 


