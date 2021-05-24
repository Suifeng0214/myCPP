#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <int> ans;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, m=0;
	cin >> q;
	while(q--){
		int tmp;
		cin >> tmp;
		ans.emplace_back(tmp + m);
		m += max(tmp, (int)0);
	}
	for (int i : ans) cout << i << " ";
}


