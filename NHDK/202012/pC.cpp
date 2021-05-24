#include <bits/stdc++.h>
using namespace std;
#define int long long
char mp[1010][1010];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	int t=0;
	while(q--){
		t++;
		int r, c;
		cin >> c >> ri;
		cout << "Case " << t << ":\n";
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				mp[i][j] = '*';
			}
		}
		for (int i = 1; i < r-1; i++){
			for (int j = 1; j < c-1; j++){
				mp[i][j] = " ";
			}
		}
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				cout << mp[i][j];
			}
			cout << "\n";
		}
		if (r-2 < 0 || c-2 < 0){
			cout << "Use " << r*c << " fences\n";
			continue;
		}
		cout << "Use " << r*c - (r-2)*(c-2) << " fences\n";
		
	}
}
