#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	vector<int>a;
	cin >> q;
	while(q--){
		int t, tmp;
		cin >> t;
		a.clear();
		while(t--){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		bool flag = 0;
		for (int i = 1; i < a.size(); i++){
			if ((a[i] - a[i-1]) % 2 != 0){
				flag = 1;
				break;
			}
		}
		if (!flag){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}


