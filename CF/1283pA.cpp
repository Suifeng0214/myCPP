#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, hh, mm;
	cin >> q;
	while(q--){
		cin >> hh >> mm;
		cout << 1440 - 60*hh - mm << "\n";
	}
	return 0;
} 
