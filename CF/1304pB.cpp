#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m,sum=0;
	string s, rs, mid="";
	vector <string> a;
	vector <string> ans;
	cin >> n >> m;
	while(n--){
		cin >> s;
		a.emplace_back(s);
		rs = s;
		reverse(rs.begin(), rs.end());
		if (s == rs){
			mid = s;
			continue;
		}
		for (int i = 0; i < a.size(); i++){
			if (a[i] == rs){
				ans.emplace_back(a[i]);
				sum += a[i].size();
			}
		}
	}
	cout << sum*2 + mid.size() << "\n";
	if (sum*2 + mid.size() && ans.size() != 0){
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i];
		}
		cout << mid;
		for (int i = (int)ans.size()-1; i >= 0; i--){
			reverse(ans[i].begin(), ans[i].end());
			cout << ans[i];
		}
	}else{
		cout << mid;
	}
} 


