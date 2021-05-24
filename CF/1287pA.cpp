#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, k, counts=0, M;
	bool c=0;
	string s;
	cin >> q;
	while(q--){
		c = 0;
		M = 0;
		counts=0;
		cin >> k;
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if (c == 1){
				if (s[i] == 'A'){
					M = max(M, counts);
					counts = 0;
				}
				if (s[i] == 'P'){
					counts++;
				}
			}
			if (s[i] == 'A'){
				c = 1;
			}
		}
		M = max(M, counts);
		cout << M << "\n"; 
	}
} 


