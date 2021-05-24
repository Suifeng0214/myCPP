#include <bits/stdc++.h>
using namespace std;
#define int long long
	set <int> st;
	vector <int> a;
	map <int, int> mp;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		mp.clear();
		int t, tmp, last=-1;
		cin >> t;
		bool flag = 0;
		for (int i = 0; i < t; i++){
			cin >> tmp;
			mp[tmp]++;
			if (mp[tmp]>=3) flag=1;
			if (i >= 1){
				if (tmp==last) continue;
			}
			a.emplace_back(tmp);
			last = tmp;
		}
		
		st.clear();
		for (int i = 0; i < a.size(); i++){
			if (!st.count(a[i])){
				st.insert(a[i]);
			}else{
				flag = 1;
				break;
			}
		}
		if (flag){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
		/*for (int i : a) cout << i;
		cout << "\n";*/
	}
}


