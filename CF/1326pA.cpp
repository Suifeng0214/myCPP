#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> ;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int t;
		cin >> t;
		if (t == 1){
			cout << -1 << "\n";
			continue; 
		}
		for (int i = 0; i < t-1; i++){
			cout << 3;
		}
		cout << 4 << "\n"; 
	} 
}


