#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, m;
	cin >> q;
	while(q--){
		cin >> n >> m;
		if (n%m==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
 
