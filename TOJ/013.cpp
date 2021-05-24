#include <bits/stdc++.h>
using namespace std;
int a[110][100010];
vector <pair<int, int>> wp;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int v, n;
	while(cin >> v >> n){
		wp.clear();
	for (int i = 1; i <= n; i++){
		int w, p;
		cin >> w >> p;
		wp.emplace_back(w, p);
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= v; j++){
			if (wp[i-1].first <= j){
				a[i][j] = max(a[i-1][j], a[i][j-wp[i-1].first] + wp[i-1].second);
			}else{
				a[i][j] = max(a[i-1][j], a[i][j-1]);
			}
		}
	}
	/*for (int i = 1; i <= n; i++){
		for (int j = 1; j <= v; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}*/
	cout << a[n][v] << "\n";
	}
} 


