#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--){
		a.clear();
		mp.clear();
		int n;
		cin >> n;
		int M= -1;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
			mp[tmp]++;
			M = max(mp[tmp], M);
		}
		for (int i : mp){
			
		}
	}
} 
