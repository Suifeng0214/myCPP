#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, k1, k2, m1=-1, m2=-1, tmp;
	cin >> q;
	while(q--){
		m1=-1, m2=-1;
		cin >> n >> k1 >> k2;
		for (int i = 0; i < k1; i++){
			cin >> tmp;
			m1 = (m1 > tmp)? m1:tmp;
		} 
		
		for (int i = 0; i < k2; i++){
			cin >> tmp;
			m2 = (m2 > tmp)? m2:tmp;
		} 
		if (m1 > m2){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
} 
