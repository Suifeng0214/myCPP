#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <char> mm;
//set <int> st;
//map <int, int> mp;
char al[27];

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	for (int i = 0; i < 26; i++){
		al[i] = 'a'+i;
	}
	while(q--){
		mm.clear();
		int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < b; i++){
			mm.emplace_back(al[i]);
		}
		for (int i = 0; i < n; i++){
			cout << mm[i%mm.size()];
		}
		cout << "\n";
	}
} 


