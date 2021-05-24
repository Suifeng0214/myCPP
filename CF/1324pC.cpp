#include <bits/stdc++.h>
using namespace std;
#define int long long
	set <int> st;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		string a;
		cin >> a;
		int now=-1, ans=-1;
		for (int i = 0; i < a.size(); i++){
			if (a[i] == 'R'){
				//cout << i << " " << now << " " << ans << " @\n";
				ans = max(ans, (i - now));
				now = i;
			}
			if (i == a.size()-1){
				ans = max(ans, (int)a.size()-now);
			}
		}
		cout << ans << "\n";
	}
}


