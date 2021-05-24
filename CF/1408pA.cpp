#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <int> b;
vector <int> c;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--){
		a.clear();
		b.clear();
		c.clear();
		int n;
		cin >> n;
		int tmp;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		for (int i = 0; i < n; i++){
			cin >> tmp;
			b.emplace_back(tmp);
		}
		for (int i = 0; i < n; i++){
			cin >> tmp;
			c.emplace_back(tmp);
		}
		char last = a[0];
		cout << a[0] << " ";
		for (int i = 1; i < n; i++){
			if (i==n-1){
				if (a[0] == a[i]){
					cout << ((b[i] == last) ? c[i] : b[i]);
					break;
				}		
				if (a[0] == b[i]){
					cout << ((a[i] == last) ? c[i] : a[i]);
					break;
				}		
				if (a[0] == c[i]){
					cout << ((a[i] == last) ? b[i] : a[i]);
					break;
				}
			}
			if (last == a[i])
				cout << b[i], last = b[i]; 
			else cout << a[i], last = a[i];
			cout << " ";
		}
		cout << "\n";
	} 
} 


