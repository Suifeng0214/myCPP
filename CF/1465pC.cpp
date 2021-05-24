//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
vector <pair <int, int>> dot;
//set <int> st;
//map <int, int> mp;
//bitset <100010> used;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		dot.clear();
	//	set <int> st_x;
		set <int> st_y;
	//	used.reset();
		int n, m;
		cin >> n >> m;
		int ans = 0;
		for (int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			/*
			if (x==y){
				used[x] = 1;
				continue;
			}*/
			if(x!=y){
				st_y.insert(y);
				dot.emplace_back(x, y);
			}
		}
		sort(dot.begin(), dot.end());
		for (int i = dot.size()-1; i >= 0; i--){
			if (st_y.count(dot[i].F)){
				ans+=2;
				st_y.erase(dot[i].S);
				continue;
			}
			ans++;
			st_y.erase(dot[i].S);
		//	st_y.insert(dot[i].F);
		}
		cout << ans << "\n";
	}	
} 


