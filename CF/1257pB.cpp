#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	int x, y;
	cin >> q;
	while(q--){
		
		cin >> x >> y;
		if (x >= y){
			cout << "YES\n";
		}else if (x == 1 || x == 3 ||( x == 2&&y != 3)){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
} 
