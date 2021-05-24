#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
char A[110][110];
signed main() 
{ 
	ios::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, m;
		cin >> n >> m;
		if (n*m & 1){
			bool b=1;
			for (int i = 0; i < n; i++){
				for (int j = 0; j < m; j++){
					if (b){
						A[i][j] = 'B';
					}else{
						A[i][j] = 'W';
					}
					b = !b;
				}
			}
		}else{
			bool b=1;
			if (n&1){
				for (int i = 0; i < m; i++){
					for (int j = 0; j < n; j++){
						if (b){
							A[j][i] = 'B';
						}else{
							A[j][i] = 'W';
						}
					}
					b = !b;
				}
				A[0][1] = 'B';
			}else{
				for (int i = 0; i < n; i++){
					for (int j = 0; j < m; j++){
						if (b){
							A[i][j] = 'B';
						}else{
							A[i][j] = 'W';
						}
					}
					b = !b;
				}
				A[1][0] = 'B';
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cout << A[i][j];
			}
			cout << "\n";
		}
	}
} 
