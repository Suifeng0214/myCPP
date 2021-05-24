#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int t, tmp;
		cin >> t;
		bool odd1=0, odd2=0, even=0; 
		int i1, i2, ii;
		for (int i = 0; i < t; i++){
			cin >> tmp;
			if (tmp % 2 == 0){
				even = 1;
				ii = i + 1;
			}
			if (odd1){
				if (tmp & 1){
					odd2 = 1;
					i2 = i+1;
				}
			}else{
				if (tmp & 1){
					odd1 = 1;
					i1 = i+1;
				}
			}
		}
		if (even == 1){
			cout << 1 << "\n";
			cout << ii << "\n";
		}else if (odd1 && odd2){
			cout << 2 << "\n";
			cout << i1 << " " << i2 << "\n";
		}else{
			cout << -1 << "\n";
		}
	}
}


