#include <bits/stdc++.h>
#define int long long
using namespace std;
bool no[100010];
vector<int>ans;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int now = 0;
	for (int i = 0; i < n; i++){
		double tmp;
		cin >> tmp;
		if (tmp == (int)tmp){
			no[i] = 1;
		}
		now += (int)ceil(tmp);
		ans.emplace_back((int)ceil(tmp));
	}
	for (int i = 0; i < n; i++){
		if (now==0) cout << ans[i] << "\n";
		else{
			if (no[i]){
				cout << ans[i] << "\n";
				continue;
			}
			cout << ans[i]-1 << "\n";
			now--;
		}
	}
}
