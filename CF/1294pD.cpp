#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> B2(1000000); 
vector <int> B[1000000];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, c=1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
			B[i].resize(1000000);
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			B[i][j] = c++;
		}
	}
	for (int i = 1; i <= n+5; i++){
		for (int j = 1; j <= m+5; j++){
			cout << B[i][j] << " ";
		}
		cout <<"\n";
	}
	return 0;
} 
