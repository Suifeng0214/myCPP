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
		int x, y;
		cin >> x >> y;
		if (abs(x-y)>1)
			cout << max(x+y + (abs(x-y)) -1, (int)0) << "\n";
		else
			cout << x+y << "\n";
	}	
} 


