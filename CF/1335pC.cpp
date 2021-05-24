#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
map <int, int> mp;
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		mp.clear();
		int n;
		cin >> n;
		int M=-1;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			mp[tmp]++;
			M = max(mp[tmp], M);
		}
		if (mp.size() == 1){
			cout << 0 << "\n";
			continue;
		}
		int ans;
		if (M == mp.size()){
			ans = min(M, (int)mp.size()) - 1;
		}else if (M > mp.size()){
			ans = min(M, (int)mp.size());
		}else if (M < mp.size()){
			ans = min(M, (int)mp.size());
		}
		cout << ans << "\n"; 
	}
} 


