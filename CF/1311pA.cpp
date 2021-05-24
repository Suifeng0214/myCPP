#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, a, b;
	cin >> q;
	while(q--){
		cin >> a >> b;
		if (a == b){
			cout << 0 << "\n";
		}else if (a > b){
			if ((a-b) % 2 != 0){
				cout << 2 << "\n";
			}else{
				cout << 1 << "\n";
			}
		}else{
			if ((b-a) % 2 != 0){
				cout << 1 << "\n";
			}else{
				cout << 2 << "\n";
			}
		}
	}
	
	 
} 

