//Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	string z = "Zweite\n", e = "Erste\n";
	while (q--){
		int m, n;
		cin >> m >> n;
		if (m==1){
			if (n==2){
				cout << z;
			}else{
				cout << e;
			}
		}else{
			if (n==m+1){
				cout << z;
			}else{
				cout << e;
			}
		}
	}
} 


