#include <bits/stdc++.h>
using namespace std;
#define int long long
	set <int> st;
	vector <int> a;
	vector <int> b;
	vector <int> c;
	vector <int> sorted;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	int tmp;
	for (int i = 0; i < q; i++){
		cin >> tmp;
		a.emplace_back(tmp);
	}
	for (int i = 0; i < q; i++){
		cin >> tmp;
		b.emplace_back(tmp);
	}
	for (int i = 0; i < q; i++){
		c.emplace_back(a[i] - b[i]);
	}
	sorted = c;
	sort(sorted.begin(), sorted.end());
	int ans=0;
	for (int i = 0; i < q; i++){
		if (c[i] == 0){
			auto it2 = upper_bound(sorted.begin(), sorted.end(), 0);
			ans += sorted.end() - it2;
			cout << ans << "@\n";
		}else if (c[i] > 0){
			auto it1 = lower_bound(sorted.begin(), sorted.end(), -c[i] + 1);
			ans += 2*sorted.size() - (sorted.end() - it1);
			cout << ans << "#\n";
		}
	}
	cout << ans;
	//for (int i : c) cout << i << " ";
}


