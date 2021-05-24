#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	int n;
	while(q--){
		cin >> n;
		for (int i = 1; i <= n; i++){
			a.emplace_back(i);
		}
		cout << 2 << "\n";
		for (int i = n-1; i >= 1; i--){
			int x = a[a.size()-1];
			int y = a[a.size()-2];
			cout << x << " " << y << "\n";
			a.pop_back();
			a.pop_back();
			a.emplace_back((x+y+1)/2);
		}
		a.pop_back();
	}
} 


