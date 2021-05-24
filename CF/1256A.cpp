#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, a, b, n, s;
	cin >> q;
	while(q--){
		cin >> a >> b >> n >> s;
		if (s / n <= a)
			s = s%n;
		else{
			s -= a*n;
		}
		if (s == 0){
			cout << "YES\n";
			continue;
		}
		if (s <= b){
			cout << "YES\n";
		}else {
			cout << "NO\n";
		} 
	}
}
