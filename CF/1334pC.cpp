#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <pair<int, int>> a;
vector <pair<double, int>> CP; 
//set <int> st;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int n;
		cin >> n;
		int cp;
		double Mcp=-1;
		for (int i = 0; i < n; i++){
			int hp, dmg;
			cin >> hp >> dmg;
			CP.emplace_back( dmg/i , i);
			Mcp = max(Mcp, dmg/hp);
			a.emplace_back(hp,dmg);
		}
		//sort(cp.begin(), cp.end());
		
	}
} 
