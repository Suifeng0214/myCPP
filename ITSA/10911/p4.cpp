#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <int> b;
signed main(){
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int tmp;
		a.clear();
		b.clear();
		int aa=0, bb=0;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		for (int i = 0; i < n; i++){
			cin >> tmp;
			b.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		for (int i = 0; i < n; i++){
			if (a[i] > b[i]) aa++;
			else if (b[i] > a[i]) bb++;
		}
		cout << aa << " " << bb << "\n";
	}
}
