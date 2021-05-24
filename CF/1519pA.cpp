//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
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
		int r, b, d;
		cin >> r >> b >> d;
		if ((d+1)*min(r, b) >= max(r, b)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
} 


