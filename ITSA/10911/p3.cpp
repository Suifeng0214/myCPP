#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		a.clear();
		int sum = 0;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		int ans  =0; 
		for (int i = 0; i < n; i++){
			ans += sum+a[i]/2;
			sum += a[i];
		}
		cout << ans <<"\n";

	}
}
