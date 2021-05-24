#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
int mp[1000][1000];

signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int n, m;
		cin >> n >> m;
		int tmpSum=0;
		bool zero=0;
		int cnt=0; //<0
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> mp[i][j];
				a.emplace_back(abs(mp[i][j]));
				if (mp[i][j] == 0) zero=1;
				if (mp[i][j] < 0) cnt++;
				tmpSum += abs(mp[i][j]);
			}
		}
		sort(a.begin(), a.end());
		if (zero){
			cout << tmpSum << "\n";
			continue;
		}
		if (cnt % 2 == 0){
			cout << tmpSum << "\n";
			continue;
		}else{
			cout << tmpSum-2*a[0] << "\n";
			continue;
		}
	}	
} 


