#include <bits/stdc++.h>
using namespace std;
#define int long long
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
		if (n%2==0){
			cout << ((n==2)? 1 : 2) << "\n";
			continue;
		}
		if (n & 1){
			int ans;
			if (n==1) ans = 0;
			if (n==3) ans = 2;
			if (n!=1 && n!= 3) ans = 3;
			cout << ans << "\n";
		}
		
	}	
} 


