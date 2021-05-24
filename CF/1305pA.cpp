#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	vector <int> b;
	set <int> st;
	int q, tmp;
	cin >> q;
	while(q--){
		a.clear();
		b.clear(); 
		st.clear();
		int t;
		cin >> t;
		for (int i = 0; i < t; i++){
			cin >> tmp;
			a.emplace_back(tmp); 
		}
		for (int i = 0; i < t; i++){
			cin >> tmp;
			b.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i = 0; i < t; i++){
			if (i != t-1)
				cout << a[i] << " ";
			else
				cout << a[i] << "\n";
		}
		for (int i = 0; i < t; i++){
			if (i != t-1)
				cout << b[i] << " ";
			else
				cout << b[i] << "\n";
		}
	}
} 

