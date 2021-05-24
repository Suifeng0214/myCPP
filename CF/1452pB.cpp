
#include <bits/stdc++.h>
using namespace std;
#define int long long
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
		int sum = 0, mx=0;
		int tmp;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			sum += tmp;
			mx = max(mx, tmp);
		}
		if (mx*(n-1)-sum >= 0) cout << mx*(n-1)-sum << "\n";
		else
		for (int i = mx+1; ; i++){
			if (i*(n-1) >= sum){
				cout << i*(n-1) - sum << "\n";
				break;
			}
		}
//		cout << max(mx*(n-1)-sum, ((n-1)-sum%(n-1))%(n-1)) << "\n";
	}	
} 


