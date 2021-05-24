#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		int now = b;
		for (int i = 0; i < a; i++){
			b++;
			b*=2;
		}
		cout << b << "\n";
	}
} 


