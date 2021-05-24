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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if (a <= b){
			cout << b << "\n";
			continue;
		}
		if (d >= c){
			cout << -1 << "\n";
			continue;
		}
		int times= (a-b)/(c-d);
		if ((a-b)%(c-d) != 0) times++;
		cout << b+times*c << "\n";
	}
} 


